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

const int N=1e5+10;

int n;
int a[N],f[2][2];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    f[1][0]=-0x3f3f3f3f;
    for(int i=1;i<=n;i++)
    {
        int t=f[0][0];
        f[0][0]=max(f[0][0],f[0][1]);
        f[0][1]=f[1][0]+a[i];
        f[1][0]=max(f[1][0],t-a[i]);
    }
    cout<<max(f[0][0],max(f[0][1],f[1][0]))<<endl;
    return 0;
}





