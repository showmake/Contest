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

const int N=31;

int n;
int a[N],f[N][N],pos[N][N];

void dfs(int l,int r)
{
    if(l>r) return ;
    int root=pos[r-l+1][l];
    cout<<root<<' ';
    if(l==r) return ;
    dfs(l,root-1);
    dfs(root+1,r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        f[1][i]=a[i];
        pos[1][i]=i;
        f[0][i]=1;
    }
    for(int len=2;len<=n;len++)
        for(int l=1;l+len-1<=n;l++)
        {
            int r=l+len-1;
            for(int k=l;k<=r;k++)
            {
                if(f[k-l][l]*f[r-k][k+1]+a[k]>f[len][l])
                {
                    f[len][l]=f[k-l][l]*f[r-k][k+1]+a[k];
                    pos[len][l]=k;
                }
            }
        }
    int res=0;
    for(int i=1;i<=n;i++)
    {
        if(f[n][i]>res)
            res=f[n][i];
    }
    cout<<res<<endl;
    dfs(1,n);
    return 0;
}



