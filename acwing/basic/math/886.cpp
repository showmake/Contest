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

ll a[N],b[N];
int n;

ll qmi(ll a,ll b)
{
    ll res=1%mod;
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
    a[0]=b[0]=1;
    for(int i=1;i<N;i++) a[i]=(a[i-1]*i)%mod;
    for(int i=1;i<N;i++) b[i]=b[i-1]*qmi(i,mod-2)%mod;
    cin>>n;
    while (n--)
    {
        int x,y;
        cin>>x>>y;
        cout<<a[x]*b[y]%mod*b[x-y]%mod<<endl;
    }
    return 0;
}






