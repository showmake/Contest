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

const int N=1e5+10,M=110;

int n,m;
int f[M][2];
int a[N];
int res;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    memset(f,-0x3f,sizeof f);
    f[0][0]=0;
    for(int i=1;i<=n;i++)
        for(int j=m;j;j--)
        {
            f[j][0]=max(f[j][0],f[j][1]+a[i]);
            f[j][1]=max(f[j][1],f[j-1][0]-a[i]);
            res=max(res,max(f[j][1],f[j][0]));
        }
    cout<<res<<endl;
    return 0;
}





