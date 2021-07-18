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

const int N=5*1e4+10,M=N<<1;

int n,m;
int h[N],e[M],ne[M],idx;
int p[N],cnt[N];
int res;

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

int get(int x)
{
    int y=x;
    ll res=1;
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0)
        {
            int t=1,mul=1;
            while(x%i==0)
            {
                mul*=i;
                t+=mul;
                x/=i;
            }
            res*=t;
        }
    }
    if(x>1) res*=(x+1);
    return res-y;
}

ll dfs(int u,int v)
{
    int ans=0,d1=0,d2=0;
    for(int i=h[u];~i;i=ne[i])
    {
        int j=e[i];
        if(j==v) continue;
        int t=dfs(j,u)+1;
        ans=max(ans,t);
        if(t>=d1) d2=d1,d1=t;
        else if(t>d2) d2=t;
    }
    res=max(res,d1+d2);
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    memset(h,-1,sizeof h);
    for(int i=2;i<=n;i++)
    {
        int j=get(i);
        if(j<i)
        {
            add(i,j);
            add(j,i);
        }
    }
    dfs(1,-1);
    cout<<res<<endl;
    return 0;
}




