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

const int N=20,M=3100;

ll n,m;
ll a[N],f[M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    f[0]=1;
    for(int i=1;i<=n;i++)
        for(int j=a[i];j<=m;j++)
            f[j]+=f[j-a[i]];
    cout<<f[m]<<endl;
    return 0;
}



