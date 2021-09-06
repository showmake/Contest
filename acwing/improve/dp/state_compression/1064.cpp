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

const int N=11;

int n,m;
int f[N][N*N][1<<N];
bool st[1<<N];
int cnt[1<<N];

int main()
{
    cin>>n>>m;
    //先判断每个状态是否合法
    memset(st,true,sizeof st);
    for(int i=0;i<1<<n;i++)
    {
        int last=0;
        for(int j=0;j<n;j++)
        {
            int cur=i&1<<j;
            if(cur==last&&last==1)
            {
                st[i]=false;
                break;
            }
            last=cur;
        }
    }
    //计算每个状态对应的cnt
    for(int i=0;i<1<<n;i++)
    {
        int x=i;
        for(;x;x-=x&-x) cnt[i]++;
    }
    //状态转移
    f[0][0][0]=1;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=m;j++)
            for(int s=0;s<1<<n;s++)
            {
                if(!st[s]||cnt[s]>j) continue;
                for(int t=0;t<1<<n;t++)
                {
                    if(!st[t]||cnt[t]+cnt[s]>j) continue;
                    if(!(s&t)||!st[s|t]) continue;
                    f[i][j][s]+=f[i-1][j-cnt[s]][t];
                }
            }
    cout<<f[n][m][0]<<endl;
    return 0;
}



