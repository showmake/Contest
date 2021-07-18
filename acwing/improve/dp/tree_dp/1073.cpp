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

const int N=1e4+10,inf=-1e9;

int n;
int h[N],e[N],ne[N],w[N],idx;
int d1[N],d2[N],up[N],pos[N];
bool is_leaf[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int dfs_down(int u,int v)
{
    d1[u]=inf,d2[u]=inf;
    for(int i=h[u];~i;i=ne[i])
    {
        int j=ne[i];
        if(j==v) continue;
        int t=dfs_down(j,u)+w[i];
        if(t>=d1[u])
        {
            d2[u]=d1[u],d1[u]=t;
            pos[u]=j;
        }
        else if(t>d2[u]) d2[u]=t;
    }
    if(d1[u]==inf)
    {
        is_leaf[u]=true;
        d1[u]=d2[u]=0;
    }
    return d1[u];
}

void dfs_up(int u,int v)
{
    for(int i=h[u];~i;i=ne[i])
    {
        int j=e[i];
        if(j==v) continue;
        if(pos[u]==j) up[j]=max(up[u],d2[u])+w[i];
        else up[j]=max(up[u],d1[u])+w[i];
        dfs_up(j,u);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    memset(h,-1,sizeof h);
    for(int i=0;i<n-1;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z),add(y,x,z);
    }
    dfs_down(1,-1);
    dfs_up(1,-1);
    int res=d1[1];
    for(int i=2;i<=n;i++)
    {
        if(is_leaf[i]) res=min(res,up[i]);
        else res=min(res,max(up[i],d1[i]));
    }
    cout<<res<<endl;
    return 0;
}


