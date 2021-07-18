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

const int N=1e3+10,M=1e5+10;

int n,m;
int f[N];
struct  Edge
{
    int u,v,t;
    bool operator < (const Edge& rms) const { return t<rms.t; }
}e[M];

int get(int x)
{
    if(x!=f[x]) f[x]= get(f[x]);
    return f[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=0;i<m;i++) cin>>e[i].u>>e[i].v>>e[i].t;
    sort(e,e+m);
    int cnt=0,res=-1;
    for(int i=0;i<m;i++)
    {
        int x=e[i].u,y=e[i].v,t=e[i].t;
        int fx=get(x),fy=get(y);
        if(fx!=fy)
        {
            cnt++;
            f[fx]=fy;
            if(cnt==n-1)
            {
                res=t;
                break;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}

