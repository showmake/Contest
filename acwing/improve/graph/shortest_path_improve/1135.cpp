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

const int N=5*1e4+10,M=1e5+10;

int n,m,a,b,c,p,q;
int h[N],ne[M],e[M],w[M],idx,d[N];
bool st[N],used[5];
int ans=0x3f3f3f3f;
int s[5],g[5][5];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

void dijkstra(int start)
{
    memset(st,false,sizeof st);
    memset(d,0x3f,sizeof d);
    d[start]=0;
    priority_queue<pii,vector<pii>,greater<pii>> heap;
    heap.push({0,start});
    while(heap.size())
    {
        pii cur=heap.top();heap.pop();
        int x=cur.second;
        if(st[x]) continue;
        st[x]=true;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i],t=w[i];
            if(st[y]) continue;
            if(d[y]>d[x]+t)
            {
                d[y]=d[x]+t;
                heap.push({d[y],y});
            }
        }
    }
    return ;
}

void dfs(int u,int sum,int f)
{
    if(sum>ans) return ;
    if(u==5) ans=sum;
    for(int i=0;i<5;i++)
    {
        if(used[i]) continue;
        used[i]=true;
        if(f==-1) dfs(u+1,sum+s[i],i);
        else dfs(u+1,sum+g[f][i],i);
        used[i]=false;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    int a[5];
    for(int i=0;i<5;i++) cin>>a[i];
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y,t;
        cin>>x>>y>>t;
        add(x,y,t),add(y,x,t);
    }

    dijkstra(1);
    for(int i=0;i<5;i++) s[i]=d[a[i]];

    for(int i=0;i<5;i++)
    {
        dijkstra(a[i]);
        for(int j=0;j<5;j++)
        {
            g[i][j]=d[a[j]];
        }
    }
    dfs(0,0,-1);
    cout<<ans<<endl;
    return 0;
}








