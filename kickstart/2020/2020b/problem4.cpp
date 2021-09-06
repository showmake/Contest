//
// Created by zhuzhen on 2021/5/18.

//    只能过小数据


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
using ld= long double;

const int N=1e3+10;

int T;
int n,m,l,r,u,d;
long double f[N][N];

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m>>l>>u>>r>>d;
        memset(f,0,sizeof f);
        for(int i=d+1;i<=m;i++)
            for(int j=1;j<=n;j++)
                f[i][j]=1;
        for(int i=1;i<=m;i++)
            for(int j=r+1;j<=n;j++)
                f[i][j]=1;
        for(int i=d;i>=u;i--)
            for(int j=l-1;j;j--)
                f[i][j]=f[i+1][j]/2+f[i][j+1]/2;
        for(int i=u-1;i;i--)
            for(int j=r;j>=l;j--)
                f[i][j]=f[i+1][j]/2+f[i][j+1]/2;
        for(int i=u-1;i;i--)
            for(int j=l-1;j;j--)
                f[i][j]=f[i+1][j]/2+f[i][j+1]/2;
        cout<<"Case #"<<t<<": "<<f[1][1]<<endl;
    }
    return 0;
}


