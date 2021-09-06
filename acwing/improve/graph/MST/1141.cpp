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

const int N=110,M=210;

struct Edge
{
    int u,v,w;
    bool operator < (const Edge& rms) const { return w<rms.w; }
}e[M];

int n,m;
int f[N];

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

int kruskal()
{
    int res=0;
    sort(e,e+m);
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=0;i<m;i++)
    {
        int fx=get(e[i].u),fy=get(e[i].v);
        if(fx!=fy)
        {
            res+=e[i].w;
            f[fx]=fy;
        }
    }
    return res;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>e[i].u>>e[i].v>>e[i].w;
    cout<<kruskal()<<endl;
    return 0;
}




