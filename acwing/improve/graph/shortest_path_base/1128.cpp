#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=110,M=500;

int n,m;
int h[N],e[M],w[M],ne[M],idx;
int d[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int dijkstra()
{
    memset(d,0x3f,sizeof d);
    memset(st,false,sizeof st);
    priority_queue<pii,vector<pii>, greater<pii>> heap;
    d[1]=0;
    heap.push({0,1});
    int res=0,cnt=0;
    while (heap.size())
    {
        pii cur=heap.top();heap.pop();
        int x=cur.second,dist=cur.first;
        if(st[x]) continue;
        cnt++;
        res=max(res,dist);
        st[x]= true;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(st[y]) continue;
            if(d[x]+w[i]<d[y])
            {
                d[y]=d[x]+w[i];
                heap.push({d[y],y});
            }
        }
    }
    return cnt<n?-1:res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z),add(y,x,z);
    }
    cout<<dijkstra()<<endl;
    return 0;
}













