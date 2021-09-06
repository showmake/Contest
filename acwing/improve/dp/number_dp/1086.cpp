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
using ull = unsigned long long;

const int N=33,mod=1e9+7;

int T;
ull l,r;
ull f[N][10][7][7],g[N][10][7][7],h[N][10][7][7];//f是个数 g是平方和 h是数字和

ll dp(ll x)
{
    if(!x) return 0;
    ull res=0;
    vector<int> nums;
    while(x)
    {
        nums.emplace_back(x%10);
        x/=10;
    }
    int sum=0,mul=0;
    for(int i=nums.size()-1;~i;i--)
    {
        int c=nums[i];
        //cout<<"c "<<c<<endl;
        for(int j=0;j<c;j++)
        {
            if(j==7) continue;
            for(int p=0;p<7;p++)
                for(int q=0;q<7;q++)
                {
                    if((p+sum)%7==0||(mul*(ll)pow(10,i+1)+q)%7==0) continue;
                    if(i==nums.size()-1) res=(res+g[i+1][j][p][q])%mod;
                    else
                    {
                        ll add=pow(10,i+1)*mul;
                        res=(res+g[i+1][j][p][q]+f[i+1][j][p][q]*add*add+2*add*h[i+1][j][p][q])%mod;
                    }
                }
        }
        //cout<<res<<endl;
        if(c==7) break;
        sum+=c;
        mul=10*mul+c;
        if(!i&&(sum%7)&&(mul%7)) res=(res+mul*mul)%mod;
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
                if(j!=7)
                {
                    f[i][j][j%7][j%7]=1;
                    h[i][j][j%7][j%7]=j;
                    g[i][j][j%7][j%7]=j* j;
                }
            }
            else
            {
                if(j==7) continue;
                for(int k=0;k<10;k++)
                {
                    if(k==7) continue;
                    for(int p=0;p<7;p++)
                        for(int q=0;q<7;q++)
                        {
                            ll add=j*(ll)pow(10,i-1);
                            f[i][j][(j+p)%7][(add+q)%7]=
                                    (f[i-1][k][p][q]+f[i][j][(j+p)%7][(add+q)%7])%mod;
                            g[i][j][(j+p)%7][(add+q)%7]=
                                    (2*add*h[i-1][k][p][q]+f[i-1][k][p][q]*add*add+g[i-1][k][p][q]+g[i][j][(j+p)%7][(add+q)%7])%mod;
                            h[i][j][(j+p)%7][(add+q)%7]=(f[i-1][k][p][q]*add+h[i][j][(j+p)%7][(add+q)%7])%mod;
                        }
                }
            }
        }

    cin>>T;
    while (T--)
    {
        cin>>l>>r;
        //cout<<dp(11)<<endl;
        cout<<dp(r)-dp(l-1)<<endl;
    }
    return 0;
}







