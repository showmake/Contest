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

const int N=51,mod=1e9+7;

ll n,m;
ll base[N][N],ans[N][N];
ll t[N][N];

void mul(ll a[N][N],ll b[N][N])
{
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            t[i][j]=0;
            for(int k=0;k<n;k++) t[i][j]=(t[i][j]+a[i][k]*b[k][j])%mod;
        }
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=t[i][j];
}

void qmi(ll a[N][N],ll m)
{
    for(int i=0;i<n;i++)
        ans[i][i]=1;
    while (m)
    {
        if(m&1) mul(ans,a);
        mul(a,a);
        m>>=1;
    }
    return ;
}


int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>base[i][j];
    qmi(base,m);
    ll res=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            res=(ans[i][j]+res)%mod;
/*
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) cout<<ans[i][j]<<' ';
        cout<<endl;
    }
*/
    cout<<res<<endl;
    return 0;
}

