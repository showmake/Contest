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

const int N=110,M=11;

int n,m;
int f[2][1<<M][1<<M],cnt[1<<M];
bool st[1<<M];
char str[N][M];

bool check(int u,int s)
{
    for(int i=0;i<m;i++)
    {
        if((s&(1<<i))&&str[u][i]=='H') return true;
    }
    return false;
}

int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%s",str[i]);
    for(int i=0;i<1<<m;i++)
    {
        int x=i;
        for(;x;x-=x&-x) cnt[i]++;
    }
    memset(st,true,sizeof st);
    for(int i=0;i<1<<m;i++)
    {
        if((i&1)&&(i&2))
        {
            st[i]= false;
            continue;
        }
        for(int j=2;j<m;j++)
        {
            if(i&(1<<j))
            {
                if((i&(1<<j-1))||(i&(1<<j-2)))
                {
                    st[i]=false;
                    break;
                }
            }
        }
    }
    int res=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<1<<m;j++)
        {
            if(!st[j]||check(i,j)) continue;
            for(int k=0;k<1<<m;k++)
            {
                if(!st[k]||(k&j)||check(i-1,k)) continue;
                for(int t=0;t<1<<m;t++)
                {
                    if(!st[t]||(t&k)) continue;
                    if((t&j)||check(i-2,t)) continue;
                    f[i&1][j][k]=max(f[i&1][j][k],f[i-1&1][k][t]+cnt[j]);
                }
                if(i==n) res=max(f[i&1][j][k],res);
            }
        }
    }
    printf("%d\n",res);
    return 0;
}


