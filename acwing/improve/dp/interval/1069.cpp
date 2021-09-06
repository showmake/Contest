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

const int N=51,inf=1e11;

int n;
ll a[N<<1],f[N<<1][N<<1];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i+n]=a[i];
    }
    for(int len=0;len<=n;len++)
        for(int l=1;l+len-1<=n*2;l++)
        {
            int r=l+len-1;
            if(len<3)
            {
                f[l][r]=0;
                continue;
            }
            f[l][r]=inf;
            for(int k=l+1;k<r;k++)
                f[l][r]=min(f[l][k]+f[k][r]+a[l]*a[r]*a[k],f[l][r]);
        }
    ll res=inf;
    for(int i=1;i<=n;i++)
        res=min(res,f[i][n+i-1]);
    cout<<res<<endl;
    return 0;
}


