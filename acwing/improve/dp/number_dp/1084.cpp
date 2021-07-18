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

int n;
ll l,r;
ll f[N][N][100];

ll dp(int x)
{
    if(!x) return 1;
    ll res=0;
    vector<int> nums;
    while(x)
    {
        nums.emplace_back(x%10);
        x/=10;
    }
    int sum=0;
    for(int i=nums.size()-1;~i;i--)
    {
        int c=nums[i];
        for(int j=0;j<c;j++)
            for(int k=0;k<n;k++)
                if((k+sum)%n==0) res+=f[i+1][j][k];
        sum+=c;
        if(!i&&sum%n==0) res++;
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    while (cin>>l>>r>>n)
    {
        memset(f,0,sizeof f);
        for(int i=1;i<N;i++)
            for(int j=0;j<10;j++)
            {
                if(i==1) f[i][j][j%n]=1;
                else
                {
                    for(int k=0;k<10;k++)
                        for(int p=0;p<n;p++)
                            f[i][j][(j+p)%n]+=f[i-1][k][p];
                }
            }
        cout<<dp(r)-dp(l-1)<<endl;
    }
    return 0;
}





