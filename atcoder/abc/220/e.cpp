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

const int N=1e5+10,mod=998244353;

int n,m;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    ll res=0;
    for(int i=1;i<=n;i++)
    {

        for(int j=0;j<=m/2;j++)
        {
            if(j>n-i||m-j>n-i) continue;
            ll x=0,y=0;
            for(int i=0;i<j;i++) x=(x*2)%mod;
            for(int i=0;i<m-j;i++) y=(y*2)%mod;
            res=((x*y)%mod+res)%mod;
        }
    }
    return 0;
}



