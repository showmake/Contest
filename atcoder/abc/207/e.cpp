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

const int N=3010,mod=1e9+7;

int n;
ll a[N],f[N][N],sum[N][N],res=0;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    f[0][0]=sum[1][0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            f[i][j]=sum[j][a[i]%j];
            if(i==n) res=(res+f[i][j])%mod;
        }
        for(int j=1;j<=i;j++)
            sum[j+1][a[i]%(j+1)]=(f[i][j]+sum[j+1][a[i]%(j+1)])%mod;
    }
    cout<<res<<endl;
    return 0;
}



