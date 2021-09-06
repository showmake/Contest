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

int n,m,k;
int h[N],e[M],ne[M],w[M],idx;
bool st[N];
int d[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int dijkstra(int bound)
{
    memset(d,0x3f,sizeof d);
    memset(st,false,sizeof st);
    priority_queue<pii,vector<pii>,greater<pii>> heap;
    d[1]=0;
    heap.push({0,1});
    while (heap.size())
    {
        pii cur=heap.top();heap.pop();
        int x=cur.second;
        if(st[x]) continue;
        st[x]=true;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i],add=(w[i]>bound);
            if(st[y]) continue;
            if(d[y]>d[x]+add)
            {
                d[y]=d[x]+add;
                heap.push({d[y],y});
            }
        }
    }
    return d[n];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z),add(y,x,z);
    }
    int l=0,r=1e6+1;
    while (l<r)
    {
        int mid=l+r>>1;
        if(dijkstra(mid)<=k) r=mid;
        else l=mid+1;
    }
    if(l==1e6+1) cout<<-1<<endl;
    else cout<<l<<endl;
    return 0;
}









