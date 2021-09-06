//
// Created by zhuzhen on 2021/5/11.
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

const int N=1e6+10;
const int mod=1e9+7;

int n;
unordered_map<int,int> h;

void work(int x)
{
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0)
        {
            int cnt=0;
            while(x%i==0) x/=i,cnt++;
            h[i]+=cnt;
        }
    }
    if(x>1) h[x]++;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        work(x);
    }
    ll res=1;
    for(auto &[k,v]: h)
    {
        //cout<<k<<' '<<v<<endl;
        res=(res*(v+1))%mod;
    }
    cout<<res<<endl;
    return 0;
}



