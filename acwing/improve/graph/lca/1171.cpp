#pragma GCC optimize(2)
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

const int N=1e4+10,M=N*2;

int n,m;
int h[N],e[M],w[M],ne[M],idx;
vector<pii> query[N];
int f[N];
int d[N];
int st[N];
int res[M];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int get(int x)
{
    if(f[x]!=x) f[x]=get(f[x]);
    return f[x];
}

void dfs(int u,int f)
{
    for(int i=h[u];~i;i=ne[i])
    {
        int v=e[i];
        if(v==f) continue;
        d[v]=d[u]+w[i];
        dfs(v,u);
    }
}

void tarjan(int u)
{
    st[u]=1;
    for(int i=h[u];~i;i=ne[i])
    {
        int v=e[i];
        if(!st[v])
        {
            tarjan(v);
            f[v]=u;
        }
    }
    for(auto item:query[u])
    {
        int y=item.first,id=item.second;
        if(st[y]==2)
        {
            int fa=get(y);
            res[id]=d[u]+d[y]-2*d[fa];
        }
    }
    st[u]=2;
}


int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<n-1;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z),add(y,x,z);
    }
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        query[x].push_back({y,i});
        query[y].push_back({x,i});
    }
    for(int i=1;i<=n;i++) f[i]=i;
    dfs(1,-1);
    tarjan(1);
    for(int i=0;i<m;i++) cout<<res[i]<<endl;
    return 0;
}













/*
#pragma GCC optimize(2)
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

const int N=1e4+10,M=2*N;

int n,m;
int h[N],e[M],ne[M],w[M],idx;
int dp[N],f[N][21],d[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

void bfs()
{
    memset(d,0x3f,sizeof d);
    memset(dp,0x3f,sizeof dp);
    d[0]=dp[0]=0;
    d[1]=0;
    dp[1]=1;
    queue<int> q;
    q.push(1);
    while (q.size())
    {
        int x=q.front();q.pop();
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(dp[y]>dp[x]+1)
            {
                d[y]=d[x]+w[i];
                dp[y]=dp[x]+1;
                q.push(y);
                f[y][0]=x;
                for(int k=1;k<=20;k++) f[y][k]=f[f[y][k-1]][k-1];
            }
        }
    }
}

int lca(int x,int y)
{
    if(dp[x]<dp[y]) swap(x,y);
    for(int i=20;~i;i--)
        if(dp[f[x][i]]>=dp[y]) x=f[x][i];
    if(x==y) return y;
    for(int i=20;~i;i--)
        if(f[x][i]!=f[y][i])
        {
            x=f[x][i];
            y=f[y][i];
        }
    return f[x][0];
}


int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<n-1;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z),add(y,x,z);
    }
    bfs();
    while (m--)
    {
        int x,y;
        cin>>x>>y;
        cout<<(d[x]+d[y]-2*d[lca(x,y)])<<endl;
    }
    return 0;
}
*/











