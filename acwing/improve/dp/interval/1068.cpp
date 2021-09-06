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

const int N=210,inf=0x3f3f3f3f;

int n;
int a[N<<1],f[N][N<<1],g[N][N<<1];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    memset(f,0x3f,sizeof f);
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        f[1][i]=f[1][i+n]=0;
        a[i]+=a[i-1];
        a[i+n]=a[i];
    }
    for(int i=n+1;i<=n*2;i++) a[i]+=a[n];
    for(int len=2;len<=n;len++)
        for(int l=1;l+len-1<=n*2;l++)
        {
            int r=l+len-1;
            int sum=a[r]-a[l-1];
            for(int k=l;k<r;k++)
            {
                f[len][l]=min(f[len][l],f[k-l+1][l]+f[r-k][k+1]+sum);
                g[len][l]=max(g[len][l],g[k-l+1][l]+g[r-k][k+1]+sum);
            }
        }
    int res=inf,ans=-inf;
    for(int i=1;i<=n;i++)
    {
        res=min(res,f[n][i]);
        ans=max(ans,g[n][i]);
    }
    cout<<res<<endl;
    cout<<ans<<endl;
    return 0;
}

