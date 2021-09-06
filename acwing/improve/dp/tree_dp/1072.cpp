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

const int N=1e4+10;

int n;
int h[N],e[N],w[N],ne[N],idx;
int res=0;

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

ll dfs(int u,int v)
{
    int ans=0,d1=0,d2=0;
    for(int i=h[u];~i;i=ne[i])
    {
        int j=e[i];
        if(j==v) continue;
        int t=dfs(j,u)+w[i];
        ans=max(ans,t);
        if(t>=d1) d2=d1,d1=t;
        else if(t>d2) d2=t;
    }
    res=max(res,d1+d2);
    return ans;
}

int main()
{
    scanf("%d",&n);
    memset(h,-1,sizeof h);
    for(int i=1;i<n;i++)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        add(x,y,z),add(y,x,z);
    }
    dfs(1,-1);
    printf("%d\n",res);
    return 0;
}

