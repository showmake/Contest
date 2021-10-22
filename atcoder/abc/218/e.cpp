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

const int N=2*1e5+10,M=N<<1;

int n,m;

struct  Edge
{
    ll x,y,w;
    bool flag=false;
    bool operator <(const Edge &rms) const { return w<rms.w ;}
}e[M];

ll f[N];
ll res=0,cnt=0;

ll get(ll x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

void kruskal()
{
    sort(e,e+cnt);
    for(int i=0;i<cnt;i++)
    {
        ll x=e[i].x,y=e[i].y,w=e[i].w;
        ll fx=get(x),fy=get(y);
        if(fx!=fy)
        {
            res+=w;
            e[i].flag= true;
            f[fx]=fy;
        }
    }
    return ;
}


int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++) f[i]=i;
    ll sum=0;
    for(int i=0;i<m;i++)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        e[cnt++]={x,y,z};
    }
    kruskal();
    for(int i=0;i<m;i++)
    {
        if(!e[i].flag&&e[i].w>0) sum+=e[i].w;
    }
    cout<<sum<<endl;
    return 0;
}



