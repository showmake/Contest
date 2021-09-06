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

const int N=110,M=1e4+10;

int n,T;
struct Stone
{
    ll v,w,d;
    bool operator < (const Stone &rms) const { return v*rms.d < rms.v*d;}
}s[N];

ll f[N][M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n;
        ll m=0;
        for(int i=1;i<=n;i++)
        {
            cin>>s[i].v>>s[i].w>>s[i].d;
            m+=s[i].v;
        }
        sort(s+1,s+1+n);
        memset(f,0,sizeof f);
        for(int i=1;i<=n;i++)
            for(int j=0;j<=m;j++)
            {
                f[i][j]=f[i-1][j];
                if(j>=s[i].v) f[i][j]=max(f[i][j],f[i-1][j-s[i].v]+s[i].w-(j-s[i].v)*s[i].d);
            }
        ll res=0;
        for(int i=0;i<=m;i++) res=max(res,f[n][i]);
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}

