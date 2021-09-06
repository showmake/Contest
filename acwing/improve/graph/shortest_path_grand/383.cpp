#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e3+10,M=2*1e4+10;

int n,m,T;
int h[N],e[M],ne[M],w[M],idx;
int d[N][2],cnt[N][2];
bool st[N][2];
int s,t;

struct Node
{
    int x,id,dist;
    bool operator > (const Node &rms) const { return dist > rms.dist ;}
};

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int dijkstra()
{
    memset(d,0x3f,sizeof d);
    memset(cnt,0,sizeof cnt);
    memset(st,false,sizeof st);
    priority_queue<Node,vector<Node>,greater<Node>> heap;
    heap.push({s,0,0});
    d[s][0]=0;
    cnt[s][0]=1;
    while (heap.size())
    {
        Node cur=heap.top();
        heap.pop();
        int x=cur.x,dist=cur.dist,id=cur.id;
        if(st[x][id]) continue;
        st[x][id]= true;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y][0]>dist+w[i])
            {
                d[y][1]=d[y][0],cnt[y][1]=cnt[y][0];
                heap.push({y,1,d[y][1]});
                d[y][0]=dist+w[i],cnt[y][0]=cnt[x][id];
                heap.push({y,0,d[y][0]});
            }
            else if(d[y][0]==dist+w[i]) cnt[y][0]+=cnt[x][id];
            else if(d[y][1]>dist+w[i])
            {
                d[y][1]=dist+w[i],cnt[y][1]=cnt[x][id];
                heap.push({y,1,d[y][1]});
            }
            else if(d[y][1]==dist+w[i]) cnt[y][1]+=cnt[x][id];
        }
    }

    int res=cnt[t][0];
    if(d[t][1]==d[t][0]+1) res+=cnt[t][1];
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>n>>m;
        memset(h,-1,sizeof h);
        idx=0;
        for(int i=0;i<m;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            add(x,y,z);
        }
        cin>>s>>t;
        cout<<dijkstra()<<endl;
    }
    return 0;
}







