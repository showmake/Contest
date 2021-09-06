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

const int N=110,M=N<<1;

int n,m;
int h[N],e[M],ne[M],w[M],idx;
int f[N][N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

void dfs(int u,int v)
{
    for(int i=h[u];~i;i=ne[i])
    {
        int y=e[i];
        if(y==v) continue;
        dfs(y,u);
        for(int j=m;j;j--)
            for(int k=0;k+1<=j;k++)
                f[u][j]=max(f[u][j],f[y][k]+f[u][j-k-1]+w[i]);
    }
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
        add(x,y,z);
        add(y,x,z);
    }
    dfs(1,-1);
    cout<<f[1][m]<<endl;
    return 0;
}





