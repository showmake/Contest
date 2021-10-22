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

ll n,m;
ll a[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i]+=a[i-1];
    }
    cin>>m;
    ll res=0;
    res+=(m/a[n])*n;
    m-=a[n]*(m/a[n]);
    int idx=0;
    while (a[idx]<=m) idx++;
    res+=idx;
    cout<<res<<endl;
    return 0;
}



