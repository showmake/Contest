//
// Created by zhuzhen on 2021/5/20.
//
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

const int N=1e4+10;

int n,m,p;
ll w[N],v[N],f[N],dp[N];

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

int main()
{
    cin>>n>>m>>p;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i]>>w[i];
        f[i]=i;
    }
    while (m--)
    {
        int x,y;
        cin>>x>>y;
        int fx=get(x),fy=get(y);
        if(fx==fy) continue;
        f[fx]=fy;
        v[fy]+=v[fx];
        w[fy]+=w[fx];
    }
    for(int i=1;i<=n;i++)
        if(f[i]==i)
        {
            for(int j=p;j>=v[i];j--)
                dp[j]=max(dp[j],dp[j-v[i]]+w[i]);
        }
    cout<<dp[p]<<endl;
    return 0;
}




