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

const int N=1e3+10,M=2*1e4+10;

ll n,m;
ll f[M],g[M],q[M];

int main()
{
    scanf("%lld%lld",&n,&m);
    for(int i=1;i<=n;i++)
    {
        ll v,w,c;
        scanf("%lld%lld%lld",&v,&w,&c);
        memcpy(g,f,sizeof f);
        for(int j=0;j<v;j++)
        {
            int hh=0,tt=0;
            for(int k=j;k<=m;k+=v)
            {
                while (hh<tt&&q[hh]+c*v<k) hh++;
                while (hh<tt&&g[q[tt-1]]-(q[tt-1]-j)/v*w<=g[k]-(k-j)/v*w) tt--;
                q[tt++]=k;
                f[k]=g[q[hh]]+(k-q[hh])/v*w;
            }
        }
    }
    printf("%lld\n",f[m]);
    return 0;
}





