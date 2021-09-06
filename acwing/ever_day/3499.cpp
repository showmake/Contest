//
// Created by zhuzhen on 2021/5/12.
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

const int N=210;

int n,m,k;
int w[N][N];
int a[N];
ll f[N][N][2];

int main()
{
    cin>>n>>k>>m;
    k=min(k,m);
    for(int i=1;i<=m;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>w[i][j];
    ll sum=0;
    for(int i=2;i<=m;i++)
    {
        sum+=w[a[i]][a[i-1]];
        f[i][0][0]=sum;
        cout<<sum<<' ';
    }
    cout<<endl;
    ll res=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=k;j++)
        {
            f[i][j][1]=max(f[i-1][j-1][0],f[i-1][j-1][1]);
            ll &x=f[i][j][0];
            for(int p=1;p<i;p++)
            {
                if((j-p+1)<0) continue;
                x=max(f[p][j-p-1][0]+w[a[p]][a[i]],x);
            }
            res=max(f[i][j][1],f[i][j][0]);
        }
    }
    cout<<res<<endl;
    return 0;
}


