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

const int N=510,M=1e4+10;

int n,m;
int f[N];
int h[N],e[N<<1],w[N<<1],ne[N<<1],idx;
int d1[N][N],d2[N][N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

struct Edge
{
    int x,y,w;
    bool flag=false;
    bool operator < (const Edge& rms) const {return w<rms.w;}
}E[M];

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

ll kruskal()
{
    ll res=0;
    sort(E,E+m);
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=0;i<m;i++)
    {
        int fx=get(E[i].x),fy=get(E[i].y);
        if(fx==fy) continue;
        f[fx]=fy;
        E[i].flag= true;
        add(E[i].x,E[i].y,E[i].w);
        add(E[i].y,E[i].x,E[i].w);
        res+=E[i].w;
    }
    return res;
}

void dfs(int u,int f,int max1,int max2,int dist1[],int dist2[])
{
    dist1[u]=max1,dist2[u]=max2;
    for(int i=h[u];~i;i=ne[i])
    {
        int v=e[i];
        if(v==f) continue;
        int x=max1,y=max2;
        if(w[i]>x)  y=x,x=w[i];
        else if(w[i]>y&&w[i]<x) y=w[i];
        dfs(v,u,x,y,dist1,dist2);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    memset(h,-1,sizeof h);
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>E[i].x>>E[i].y>>E[i].w;
    ll sum=kruskal();
    for(int i=1;i<=n;i++) dfs(i,-1,-1e9,-1e9,d1[i],d2[i]);
    ll res=1e18;
    for(int i=0;i<m;i++)
    {
        if(E[i].flag) continue;
        int x=E[i].x,y=E[i].y,d=E[i].w;
        if(d>d1[x][y]) res=min(res,sum+d-d1[x][y]);
        else if(d>d2[x][y]) res=min(res,sum+d-d2[x][y]);
    }
    cout<<res<<endl;
    return 0;
}









