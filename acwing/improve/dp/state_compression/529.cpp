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

const int N=20,inf=0x3f3f3f3f;

int n,m;
int d[N][N],sz[N],tar[N][N],lev[N];
int p,tmp;
int res,sum,cnt;
int vis[N];//记录已经开拓点的idx

void dfs(int u,int v)
{
    for(int i=u;i<=cnt;i++)
    {
        if(sum+tmp*lev[vis[i]]>=res) return ;
        for(int j=v;j<=sz[vis[i]];j++)
        {
            int ne=tar[vis[i]][j];
            if(lev[ne]) continue;
            vis[++cnt]=ne;
            tmp-=d[ne][tar[ne][1]];
            lev[ne]=lev[vis[i]]+1;
            sum+=lev[vis[i]]*d[vis[i]][ne];
            dfs(i,j+1);
            cnt--;
            tmp+=d[ne][tar[ne][1]];
            lev[ne]=0;
            sum-=lev[vis[i]]*d[vis[i]][ne];
        }
        v=1;
    }
    if(cnt==n)
    {
        res=min(res,sum);
        return ;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(d,0x3f,sizeof d);
    for(int i=1;i<=m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        if(d[u][v]<=w) continue;
        if(d[u][v]==inf)
        {
            tar[u][++sz[u]]=v;
            tar[v][++sz[v]]=u;
        }
        d[u][v]=d[v][u]=w;
    }
    auto cmp = [&](int &v1,int &v2) { return d[p][v1]<d[p][v2]; };
    for(int i=1;i<=n;i++)
    {
        p=i;
        sort(tar[i]+1,tar[i]+sz[i]+1,cmp);
        tmp+=d[i][tar[i][1]];
    }
    res=inf;
    for(int i=1;i<=n;i++)
    {
        sum=0,cnt=0;
        vis[++cnt]=i,lev[i]=1,tmp-=d[i][tar[i][1]];
        dfs(1,1);
        lev[i]=0,tmp+=d[i][tar[i][1]];
    }
    cout<<res<<endl;
    return 0;
}

