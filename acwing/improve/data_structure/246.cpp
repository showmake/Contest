#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

using ll= long long;

const int N=501000;

struct LineTree {ll l,r,data;}t[4*N];

int n,m;
ll a[N],b[N],c[N];

ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}

ll sum(ll x)
{
    ll res=0;
    for(;x;x-=x&-x) res+=c[x];
    return res;
}

void add(ll x,ll y)
{
    for(;x<=n;x+=x&-x) c[x]+=y;
}

void build(ll p,ll l,ll r)
{
    t[p].l=l,t[p].r=r;
    if(l==r)
    {
        t[p].data=b[l];
        return ;
    }
    ll mid=l+r>>1;
    build(2*p,l,mid);
    build(2*p+1,mid+1,r);
    t[p].data=gcd(t[2*p].data,t[2*p+1].data);
}

void change(ll p,ll x,ll d)
{
    if(t[p].l==t[p].r)
    {
        t[p].data+=d;
        return ;
    }
    ll mid=t[p].l+t[p].r>>1;
    if(x<=mid) change(2*p,x,d);
    else change(2*p+1,x,d);
    t[p].data=gcd(t[2*p].data,t[2*p+1].data);
}

ll ask(ll p,ll l,ll r)
{
    if(l<=t[p].l&&t[p].r<=r) return t[p].data;
    ll mid=t[p].l+t[p].r>>1;
    ll res=0;
    if(l<=mid) res=gcd(res,ask(2*p,l,r));
    if(r>mid) res=gcd(res,ask(2*p+1,l,r));
    return abs(res);
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i]-a[i-1];
    }
    build(1,1,n);
    while(m--)
    {
        char ch;
        cin>>ch;
        if(ch=='C')
        {
            ll l,r,d;
            cin>>l>>r>>d;
            change(1,l,d);
            if(r<n) change(1,r+1,-d);
            add(l,d);
            add(r+1,-d);
        }
        else if(ch=='Q')
        {
            ll l,r;
            cin>>l>>r;
            ll res=a[l]+sum(l);
            ll ans=l<r?ask(1,l+1,r):0;
            cout<<gcd(res,ans)<<endl;
        }
    }
    return 0;
}