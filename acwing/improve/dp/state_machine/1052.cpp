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

const int N=60,mod=1e9+7;

int n,m;
char str[N];
ll f[N][N],ne[N];
ll res;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>str+1;
    m=strlen(str+1);
    f[0][0]=1;
    //模式串next数组
    for(int i=2,j=0;i<=m;i++)
    {
        while (j&&str[i]!=str[j+1]) j=ne[j];
        if(str[i]==str[j+1]) j++;
        ne[i]=j;
    }
    //状态定义 已经处理完了前i位 并且第i位匹配的是模式串的第j位
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            for(char k='a';k<='z';k++)
            {
                int u=j;
                while(u&&k!=str[u+1]) u=ne[u];
                if(k==str[u+1]) u++;
                if(u<m) f[i+1][u]=(f[i+1][u]+f[i][j])%mod;
            }
    for(int i=0;i<m;i++) res=(res+f[n][i])%mod;
    cout<<res<<endl;
    return 0;
}





