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

const int N=11,M=20;

int n,m;
int f[N][M],w[N][M],pos[N][M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            cin>>w[i][j];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            for(int k=0;k<=j;k++)
            {
                if(f[i-1][j-k]+w[i][k]>f[i][j])
                {
                    f[i][j]=f[i-1][j-k]+w[i][k];
                    pos[i][j]=k;
                }
            }
    cout<<f[n][m]<<endl;
    vector<int> res;
    while (n)
    {
        res.emplace_back(pos[n][m]);
        m-=pos[n][m];
        n--;
    }
    reverse(res.begin(),res.end());
    int t=1;
    for(auto c:res) cout<<t++<<' '<<c<<endl;
    return 0;
}





