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

int n,T;
int a[N],f[N][2];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        memset(f,0,sizeof f);
        for(int i=1;i<=n;i++)
        {
            f[i][1]=f[i-1][0]+a[i];
            f[i][0]=max(f[i-1][1],f[i-1][0]);
        }
        cout<<max(f[n][1],f[n][0])<<endl;
    }
    return 0;
}




