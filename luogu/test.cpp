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

const int N=2*1e5+10,M=20;

int n,m;
int f[N][M];

bool check(int x)
{
    ll res=0;
    int len=n/x;
    int k= log2(len);
    for(int i=1;i+len<=n+1;i+=len)
        res+=max(f[i][k],f[i+len-(1<<k)][k]);
    return res>m;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>f[i][0];
        sum+=f[i][0];
    }
    int len= log2(n);
    for(int j=1;j<=len;j++)
        for(int i=1;i+(1<<j)<=n+1;i++)
            f[i][j]=max(f[i][j-1],f[i+(1<<j-1)][j-1]);
    if(sum<=m)
    {
        cout<<-1<<endl;
        return 0;
    }
    int l=1,r=n;
    while (l<r)
    {
        int mid=l+r>>1;
        if(check(mid)) r=mid;
        else l=mid+1;
    }
    cout<<l<<endl;
    return 0;
}

