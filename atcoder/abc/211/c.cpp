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

const int N=1e5+10,mod=1e9+7;

ll n;

const char op[]={'z','c','h','o','k','u','d','a','i'};
ll f[N][9];
char str[N];

int main()
{
    ios::sync_with_stdio(false);
    f[0][0]=1;
    cin>>str+1;
    n=strlen(str+1);
    for(int i=1;i<=n;i++)
        for(int j=0;j<=min(i,8);j++)
        {
            if(!j) f[i][j]=1;
            else
            {
                f[i][j]=f[i-1][j];
                if(str[i]==op[j]) f[i][j]=(f[i][j]+f[i-1][j-1])%mod;
            }
        }
    cout<<f[n][8]<<endl;
    return 0;
}



