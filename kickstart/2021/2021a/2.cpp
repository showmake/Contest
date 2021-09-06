//
// Created by zhuzhen on 2021/5/21.
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

const int N=1e3+1;

int n,T,m;
int up[N][N],down[N][N],l[N][N],r[N][N];
int g[N][N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        ll res=0;
        cin>>n>>m;
        memset(up,0,sizeof up);
        memset(down,0,sizeof down);
        memset(l,0,sizeof l);
        memset(r,0,sizeof r);
        for(int i=1;i<=n;i++) for(int j=1;j<=m;j++) cin>>g[i][j];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
                if(g[i][j]) up[i][j]=g[i][j]+up[i-1][j];
        for(int i=n;i;i--)
            for(int j=1;j<=m;j++)
                if(g[i][j]) down[i][j]=g[i][j]+down[i+1][j];
        for(int j=1;j<=m;j++)
            for(int i=1;i<=n;i++)
                if(g[i][j]) l[i][j]=g[i][j]+l[i][j-1];
        for(int j=m;j;j--)
            for(int i=1;i<=n;i++)
                if(g[i][j]) r[i][j]=g[i][j]+r[i][j+1];
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
            {
                if(up[i][j]>1)
                {
                    res+=max(min(up[i][j]-1,l[i][j]/2-1),0)+max(min(up[i][j]-1,r[i][j]/2-1),0);
                    res+=max(min(up[i][j]/2-1,l[i][j]-1),0)+max(min(up[i][j]/2-1,r[i][j]-1),0);
                }
                if(down[i][j]>1)
                {
                    res+=max(min(down[i][j]-1,l[i][j]/2-1),0)+max(min(down[i][j]-1,r[i][j]/2-1),0);
                    res+=max(min(down[i][j]/2-1,l[i][j]-1),0)+max(min(down[i][j]/2-1,r[i][j]-1),0);
                }
            }
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}



