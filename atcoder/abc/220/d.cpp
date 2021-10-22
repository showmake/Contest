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

const int N=1e5+10,mod=998244353;

int n;
int a[N],f[10][N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    f[a[1]][n]=1;
    for(int i=n;i;i--)
        for(int j=0;j<10;j++)
        {
            int x=(j+a[n-i+2])%10 ;
            int y=(j*a[n-i+2])%10;
            f[x][i-1]=(f[x][i-1]+f[j][i])%mod;
            f[y][i-1]=(f[y][i-1]+f[j][i])%mod;
        }
    for(int i=0;i<10;i++) cout<<f[i][1]<<endl;
    return 0;
}



