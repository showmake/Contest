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

const int N=1e5+10;

int n;

ll qmi(ll a,ll b,ll p)
{
    ll res=1%p;
    while (b)
    {
        if(b&1) res=(res*a)%p;
        b>>=1;
        a=(a*a)%p;
    }
    return res;
}

ll c(ll a,ll b,ll p)
{
    ll res=1;
    for(int i=1,j=a;i<=b;i++,j--)
    {
        res=(res*j)%p;
        res=(res*qmi(i,p-2,p))%p;
    }
    return res;
}

ll lucas(ll a,ll b,ll p)
{
    if(a<p&&b<p) return c(a,b,p);
    return c(a%p,b%p,p)* lucas(a/p,b/p,p)%p;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    while (n--)
    {
        ll a,b,p;
        cin>>a>>b>>p;
        cout<<lucas(a,b,p)<<endl;
    }
    return 0;
}




