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

const int N=1510,M=N;

int n;
int h[N],e[M],ne[M],idx;
int f[N][2];
bool st[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

void dfs(int u)
{
    f[u][0]=0,f[u][1]=1;
    for(int i=h[u];~i;i=ne[i])
    {
        int j=e[i];
        dfs(j);
        f[u][0]+=f[j][1];
        f[u][1]+=min(f[j][0],f[j][1]);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    while (cin>>n)
    {
        memset(h,-1,sizeof h);
        memset(st,false,sizeof st);
        idx=0;
        for(int i=0;i<n;i++)
        {
            int u,m;
            scanf("%d:(%d)",&u,&m);
            while (m--)
            {
                int v;
                cin>>v;
                add(u,v);
                st[v]=true;
            }
        }
        int root=0;
        while (st[root]) root++;
        dfs(root);
        cout<<min(f[root][1],f[root][0])<<endl;
    }
    return 0;
}





