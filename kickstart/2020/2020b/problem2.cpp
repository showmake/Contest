//
// Created by zhuzhen on 2021/5/18.
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

const int N=1e3+10;

int n,T;
ll m;
ll a[N];
bool check(ll mid)
{
    ll x=mid;
    for(int i=0;i<n;i++)
    {
        ll y=a[i];
        if(x%y==0||!y) continue;
        if(x/y==m/y) return false;
        else
            x=(x/y+1)*y;
    }
    return true;
}

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        ll l=1,r=m;
        while(l<r)
        {
            ll mid=l+r+1>>1;
            if(check(mid)) l=mid;
            else r=mid-1;
        }
        cout<<"Case #"<<t<<": "<<l<<endl;
    }
    return 0;
}


