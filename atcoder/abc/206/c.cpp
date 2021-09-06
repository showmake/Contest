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

const int N=3*1e5+10;

ll n;
ll a[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll res=0;
    ll p=0,q=0;
    while(q<n)
    {
        while(q<n&&a[p]==a[q]) q++;
        if(q==n) break;
        res+=(q-p)*(n-q);
        p=q;
    }
    cout<<res<<endl;
    return 0;
}



