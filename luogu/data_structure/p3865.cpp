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
    scanf("%d%d",&n,&m);
    int len=log2(n);
    for(int i=1;i<=n;i++) scanf("%d",&f[i][0]);
    for(int j=1;j<=len;j++)
        for(int i=1;i+(1<<j)<=n+1;i++)
            f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
    while (m--)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        int k=log2(r-l+1);
        printf("%d\n",max(f[l][k],f[r+1-(1<<k)][k]));
    }
    return 0;
}



