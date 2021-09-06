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

const int N=100;

int a[N<<1],f[N<<1][N];
int n;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        a[i+n]=a[i];
    }
    a[2*n+1]=a[1];
    for(int len=2;len<=n;len++)
        for(int l=1;l+len-1<=2*n;l++)
        {
            int r=l+len-1;
            for(int k=l;k<r;k++)
                f[len][l]=max(f[k-l+1][l]+f[r-k][k+1]+a[l]*a[k+1]*a[r+1],f[len][l]);
        }
    int res=0;
    for(int i=1;i<=n;i++) res=max(res,f[n][i]);
    cout<<res<<endl;
    return 0;
}



