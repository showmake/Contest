//
// Created by zhuzhen on 2021/5/23.
//
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

const int N=2*1e6+10;

int T;
ll n;
ll sum[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    for(int i=1;i<=N;i++) sum[i]=sum[i-1]+i;
    for(int t=1;t<=T;t++)
    {
        cin>>n;
        ll res=0;
        for(ll i=1;i-1<=(n<<1)/i;i++)
        {
            ll y=n-i*(i-1)/2;
            if(y%i==0&&y/i>=1&&y/i<=n) res++;
        }
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}


