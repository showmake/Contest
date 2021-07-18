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

const int N=5*1e4+10,M=20;

int n,m;
int f_max[N][M],f_min[N][M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>f_max[i][0];
        f_min[i][0]=f_max[i][0];
    }
    int len= log2(n);
    for(int j=1;j<=len;j++)
        for(int i=1;i+(1<<j)<=n+1;i++)
        {
            f_max[i][j]=max(f_max[i][j-1],f_max[i+(1<<j-1)][j-1]);
            f_min[i][j]=min(f_min[i][j-1],f_min[i+(1<<j-1)][j-1]);
        }
    while (m--)
    {
        int l,r;
        cin>>l>>r;
        int k= log2(r-l+1);
        cout<<max(f_max[l][k],f_max[r+1-(1<<k)][k])-min(f_min[l][k],f_min[r+1-(1<<k)][k])<<endl;
    }
    return 0;
}


