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

const int N=1510;

int n;
int h[N],e[N],w[N],ne[N],idx;
int f[N][3];
bool st[N];


inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

void dfs(int u)
{
    f[u][0]=0,f[u][2]=0,f[u][2]=w[u];
    for(int i=h[u];~i;i=ne[i])
    {
        int v=e[i];
        dfs(v);
        f[u][0]+=min(f[v][1],f[v][2]);
        f[u][2]+=min(min(f[v][1],f[v][0]),f[v][2]);
    }
    f[u][1]=1e9;
    for(int i=h[u];~i;i=ne[i])
    {
        int v=e[i];
        f[u][1]=min(f[u][1],f[v][2]+f[u][0]-min(f[v][1],f[v][2]));
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    memset(h,-1,sizeof h);
    for(int i=0;i<n;i++)
    {
        int x,z,m;
        cin>>x>>z>>m;
        w[x]=z;
        for(int i=0;i<m;i++)
        {
            int y;
            cin>>y;
            add(x,y);
            st[y]=true;
        }
    }
    int root=1;
    while(st[root]) root++;
    dfs(root);
    cout<<min(min(f[root][0],f[root][1]),f[root][2])<<endl;
    return 0;
}




