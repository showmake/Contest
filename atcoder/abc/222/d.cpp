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

const int N=3100,mod=998244353;

int n;

int a[N],b[N];
ll f[N][N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=a[1];i<=b[i];i++) f[1][i]=1;
    for(int i=1;i<n;i++)
    {
        for(int j=a[i];j<=b[i];j++)
        {
            if(!f[i][j]) continue;
            for(int k=max(a[i+1],j);k<=b[i+1];k++)
                f[i+1][k]=(f[i+1][k]+f[i][j])%mod;
        }
    }
    ll res=0;
    for(int i=a[n];i<=b[n];i++) res=(res+f[n][i])%mod;
    cout<<res<<endl;
    return 0;
}