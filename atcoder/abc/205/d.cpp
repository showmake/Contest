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

ll n,m;
ll a[N],b[N];

ll get(ll x)
{
    ll l=0,r=n+1;
    while(l<r)
    {
        ll mid=l+r>>1;
        if(a[mid]>=x) r=mid;
        else l=mid+1;
    }
    return l;
}


int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    ll last=0;
    for(int i=1;i<=n;i++)
    {
        cin>>b[i];
        a[i]=a[i-1]+b[i]-last-1;
        last=b[i];
    }
    while (m--)
    {
        ll x;
        cin>>x;
        ll idx=get(x);
        idx--;
        cout<<b[idx]+(x-a[idx])<<endl;
    }
    return 0;
}



