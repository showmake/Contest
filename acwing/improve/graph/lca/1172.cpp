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

const int N=4*1e4+10,M=16;

int n,m;
int h[N],e[N<<1],ne[N<<1],idx;
int d[N];
int f[N][M];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

void bfs(int root)
{
    memset(d,0x3f,sizeof d);
    queue<int> q;
    d[0]=0;
    d[root]=1;
    q.push(root);
    while (q.size())
    {
        int x=q.front();q.pop();
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]>d[x]+1)
            {
                d[y]=d[x]+1;
                f[y][0]= x;
                q.push(y);
                for(int k=1;k<M;k++) f[y][k]=f[f[y][k-1]][k-1];
            }
        }
    }
}

int lca(int x,int y)
{
    if(d[x]<d[y]) swap(x,y);
    for(int i=M-1;~i;i--)
    {
        if(d[f[x][i]]>=d[y]) x=f[x][i];
    }
    if(x==y) return y;
    for(int i=M-1;~i;i--)
    {
        if(f[x][i]!=f[y][i])
        {
            x=f[x][i];
            y=f[y][i];
        }
    }
    return f[x][0];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    memset(h,-1,sizeof h);
    int root;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        if(y==-1) root=x;
        else add(x,y),add(y,x);
    }
    bfs(root);
    cin>>m;
    while (m--)
    {
        int x,y;
        cin>>x>>y;
        int res=lca(x,y);
        if(res==x) cout<<1<<endl;
        else if(res==y) cout<<2<<endl;
        else cout<<0<<endl;
    }
    return 0;
}












