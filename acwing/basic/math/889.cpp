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

const int N=1e5+10,mod=1e9+7;

int n;

ll qmi(ll a,ll b)
{
    ll res=1;
    while(b)
    {
        if(b&1) res=(res*a)%mod;
        b>>=1;
        a=(a*a)%mod;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    ll res=1;
    for(int i=1,j=2*n;i<=n;i++,j--)
    {
        res=(res*j)%mod;
        res=(res*qmi(i,mod-2))%mod;
    }
    res=(res*qmi(n+1,mod-2))%mod;
    cout<<res<<endl;
    return 0;
}





