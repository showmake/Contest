#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=13,mod=1e8;

int n,m;
int g[N][N],f[N][1<<N];
bool st[1<<N];

bool check(int u,int s)
{
    for(int i=0;i<n;i++)
    {
        int cur=s&(1<<i);
        if(cur&&!g[i][u]) return true;
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=1;j<=m;j++)
            cin>>g[i][j];
    memset(st,true,sizeof st);
    for(int i=0;i<1<<n;i++)
    {
        int last=0;
        for(int j=0;j<n;j++)
        {
            int cur=i&(1<<j);
            if(cur&&last)
            {
                st[i]= false;
                break;
            }
            last=cur;
        }
    }
    f[0][0]=1;
    for(int i=0;i<=m;i++)
        for(int j=0;j<1<<n;j++)
        {
            if(!st[j]||check(i+1,j)) continue;
            for(int k=0;k<1<<n;k++)
            {
                if(!st[k]||check(i,k)||k&j) continue;
                f[i+1][j]=(f[i][k]+f[i+1][j])%mod;
            }
        }
    cout<<f[m+1][0]<<endl;
    return 0;
}



