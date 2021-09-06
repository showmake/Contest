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

const int N=1e5+10;

int n,m;
ll a[N],p[N],q[N];

void add(ll x,ll y,ll t[])
{
    for(;x<=n;x+=x&-x) t[x]+=y;
}

ll ask(ll x,ll t[])
{
    ll res=0;
    for(;x;x-=x&-x) res+=t[x];
    return res;
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        ll x=a[i]-a[i-1];
        add(i,x,p);
        add(i,i*x,q);
    }
    while(m--)
    {
        char c;
        cin>>c;
        if(c=='Q')
        {
            ll l,r;
            cin>>l>>r;
            ll res=(r+1)* ask(r,p)- ask(r,q)-l* ask(l-1,p)+ ask(l-1,q);
            cout<<res<<endl;
        }
        else if(c=='C')
        {
            ll l,r,d;
            cin>>l>>r>>d;
            add(l,d,p);
            add(r+1,-d,p);
            add(l,l*d,q);
            add(r+1,-(r+1)*d,q);
        }
    }
    return 0;
}