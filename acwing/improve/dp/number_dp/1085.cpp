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

const int N=11;

ll l,r;
ll f[N][10];

ll dp(ll x)
{
    if(!x) return 1;
    ll res=0;
    vector<int> nums;
    while(x)
    {
        nums.emplace_back(x%10);
        x/=10;
    }
    int last=0;
    for(int i=nums.size()-1;~i;i--)
    {
        int c=nums[i];
        for(int j=0;j<c;j++)
        {
            if(last==6&&j==2) continue;
            res+=f[i+1][j];
        }
        if(c==4||c==2&&last==6) break;
        last=c;
        if(!i) res++;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    for(int i=1;i<N;i++)
        for(int j=0;j<10;j++)
        {
            if(i==1)
            {
                if(j!=4) f[i][j]=1;
            }
            else
            {
                if(j==4) continue;
                for(int k=0;k<10;k++)
                {
                    if(j==6&&k==2||k==4) continue;
                    f[i][j]+=f[i-1][k];
                }
            }
        }
    while (cin>>l>>r,l||r) cout<<dp(r)-dp(l-1)<<endl;
    return 0;
}



