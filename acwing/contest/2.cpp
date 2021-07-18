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
ll f[][m];

int get(int n,int m,int cnt)
{
    if(m==(cnt+1)/2) return n;
    else if(m<(cnt+1)/2) return get(n-1,m,cnt>>1);
    else return get(n-1,m-(cnt+1)/2,cnt>>1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    ll cnt=1;
    for(int i=0;i<n-1;i++) cnt=2*cnt+1;
    cout<<get(n,m,cnt)<<endl;
    return 0;
}

