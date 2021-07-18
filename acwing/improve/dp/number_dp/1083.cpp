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

ll l,r;
ll f[33][10];

ll dp(ll x)
{
    if(!x) return 0;
    ll res=0;
    vector<int> nums;
    while (x)
    {
        nums.emplace_back(x%10);
        x/=10;
    }
    int n=nums.size();
    int last=-2;
    for(int i=n-1;~i;i--)
    {
        int c=nums[i];
        for(int j= i==n-1;j<c;j++)
        {
            if(abs(j-last)>=2) res+=f[i+1][j];
        }
        if(abs(c-last)<2) break;
        last=c;
        if(!i) res++;
    }
    for(int i=1;i<n;i++)
        for(int j=1;j<10;j++)
            res+=f[i][j];
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    for(int i=1;i<33;i++)
        for(int j=0;j<10;j++)
        {
            if(i==1) f[i][j]=1;
            else
            {
                for(int k=0;k<10;k++)
                    if(abs(k-j)>=2) f[i][j]+=f[i-1][k];
            }
        }
    cin>>l>>r;
    cout<<dp(r)-dp(l-1)<<endl;
    return 0;
}




