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

const int N=1e5+10,M=20;

int n,m;
int f[N][M];

int main()
{
    scanf("%d",&n);
    int len=log2(n);
    for(int i=1;i<=n;i++) scanf("%d",&f[i][0]);
    for(int j=1;j<=len;j++)
        for(int i=1;i+(1<<j)<=n+1;i++)
            f[i][j]=min(f[i][j-1],f[i+(1<<(j-1))][j-1]);

    ll res=n-1;
    for(int len=3;len<=n;len++)
        for(int l=1;l+len-1<=n;l++)
        {
            int r=l+len-1;
            int k=log2(r-l-1);
            int minn=min(f[l+1][k],f[r-(1<<k)][k]);
            if(minn>=f[l][0]&&minn>=f[r][0]) res++;
        }
    cout<<res<<endl;
    return 0;
}


