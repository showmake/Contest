#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

using ll= long long;

int n;

ll exgcd(ll a,ll b,ll &x,ll &y)
{
    if(!b)
    {
        x=1;
        y=0;
        return a;
    }
    ll d=exgcd(b,a%b,x,y);
    ll z=x;
    x=y;
    y=z-y*(a/b);
    return d;
}

ll inline mod(ll a,ll b) {return (a%b+b)%b;};

int main()
{
    scanf("%d",&n);
    ll a1,m1;
    scanf("%lld%lld",&a1,&m1);
    for(int i=1;i<n;i++)
    {
        ll a2,m2,k1,k2;
        scanf("%lld%lld",&a2,&m2);
        ll d=exgcd(a1,-a2,k1,k2);
        if((m2-m1)%d)
        {
            puts("-1");
            return 0;
        }
        k1=mod(k1*(m2-m1)/d,abs(a2/d));
        m1=k1*a1+m1;
        a1=abs(a1/d*a2);
    }
    printf("%lld\n",m1);
    return 0;
}
