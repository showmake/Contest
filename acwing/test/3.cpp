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

const int N=510;

int n;
ll a[N];

int gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}

map<pii,ll> h;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            ll z=gcd(a[i],a[j]);
            ll x=a[i]/z,y=a[j]/z;
            h[{x,y}]++,h[{y,x}]++;
        }
    ll res=0;
    for(auto p:h) res=max(res,p.second);
    cout<<res<<endl;
    return 0;
}














