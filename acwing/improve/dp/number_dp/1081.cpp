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

const int N=35;

ll l,r,k,b;
ll f[N][N];

ll dp(ll x)
{
    ll res=0;
    vector<int> nums;
    while(x)
    {
        nums.push_back(x%b);
        x/=b;
    }
    int rest=k;
    for(int i=nums.size()-1;~i;i--)
    {
        int c=nums[i];
        if(c>1)
        {
            res+=f[i][rest]+f[i][rest-1];
            break;
        }
        else if(c==1)
        {
            res+=f[i][rest];
            rest--;
            if(!rest)
            {
                res++;
                break;
            }
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    for(int i=0;i<N;i++)
        for(int j=0;j<=i;j++)
        {
            if(j) f[i][j]=f[i-1][j]+f[i-1][j-1];
            else f[i][j]=1;
        }
    cin>>l>>r>>k>>b;
    cout<<dp(r)-dp(l-1)<<endl;
    return 0;
}




