#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <cmath>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=110,M=110;

int n,m;
int f[N][M];
int v[N],w[N];
int h[N],e[M],ne[M],idx;
int root;

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

void dfs(int u)
{
    for(int i=h[u];~i;i=ne[i])
    {
        int son=e[i];
        dfs(son);
        for(int j=m-v[u];~j;j--)
            for(int k=0;k<=j;k++)
                f[u][j]=max(f[u][j],f[u][j-k]+f[son][k]);
    }
    for(int i=m;i>=v[u];i--) f[u][i]=f[u][i-v[u]]+w[u];
    for(int i=0;i<v[u];i++) f[u][i]=0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=1;i<=n;i++)
    {
        int p;
        cin>>v[i]>>w[i]>>p;
        if(p==-1) root=i;
        else add(p,i);
    }
    dfs(root);
    cout<<f[root][m]<<endl;
    return 0;
}





