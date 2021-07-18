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
ll f[35][10];

ll dp(ll x)
{
    if(!x) return 1;
    vector<int> nums;
    ll res=0;
    while(x)
    {
        nums.emplace_back(x%10);
        x/=10;
    }
    int n=nums.size();
    int last=0;
    if(n==1) return nums[0]+1;
    for(int i=n-1;~i;i--)
    {
        int c=nums[i];
        for(int j=last;j<c;j++) res+=f[i+1][j];
        last=c;
        if(i&&c>nums[i-1]) break;
        if(!i) res++;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    for(int i=1;i<35;i++)
        for(int j=0;j<10;j++)
        {
            if(i==1) f[i][j]=1;
            else
            {
                for(int k=j;k<10;k++) f[i][j]+=f[i-1][k];
            }
        }

    while (cin>>l>>r)
    {
        //cout<<dp(r)<<endl;
        cout<<dp(r)-dp(l-1)<<endl;
    }
    return 0;
}





