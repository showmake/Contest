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

const int N=5*1e3+10,mod=998244353;

int n,m,k;
bool g[N][N];
ll f[N][N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    memset(g,true,sizeof g);
    for(int i=0;i<=n;i++) g[i][i]= false;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        g[x][y]=g[y][x]= false;
    }
    f[1][0]=1;
    for(int j=1;j<=k;j++)
        for(int u=1;u<=n;u++)
            for(int v=1;v<=n;v++)
            {
                if(g[u][v]) f[u][j]=(f[u][j]+f[v][j-1])%mod;
            }
    cout<<f[1][k]<<endl;
    return 0;
}



