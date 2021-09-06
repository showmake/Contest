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
using pll =pair<ll,ll>;

const int N=2*1e5+10;

int n;
pll x[N],y[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll a,b;
        cin>>a>>b;
        x[i]={a,i},y[i]={b,i};
    }
    sort(x,x+n);
    sort(y,y+n);
    pll used;
    ll s=x[n-1].first-x[0].first;
    ll t=y[n-1].first-y[0].first;
    ll res=-1e9;
    ll p=y[n-2].first-y[0].first;
    ll q=y[n-1].first-y[1].first;
    ll i=x[n-2].first-x[0].first;
    ll j=x[n-1].first-x[1].first;
    ll a=x[n-1].second,b=x[0].second,c=y[n-1].second,d=y[0].second;
    if(a<b) swap(a,b);
    if(c<d) swap(c,d);
    if (a==c&&b==d)
    {
        res=max(res,max(i,j));
        res=max(res,max(p,q));
    }
    else if(s>t)
    {
        res=t;
        res=max(res,max(i,j));
    }
    else if(s<=t)
    {
        res=s;
        res=max(res,max(p,q));
    }
    cout<<res<<endl;
    return 0;
}

