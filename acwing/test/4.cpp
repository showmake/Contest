#pragma GCC optimize(2)
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e3+10;

int n,m,k;
bool f[N][N][6];
int v[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=0;i<=m;i++) f[0][i][0]= true;
    int res=0;
    for(int i=1;i<=n;i++)
    {
        bool flag=false;
        for(int j=0;j=m;j++)
            for(int p=0;p<=k;p++)
            {
                if(p<k)
                {
                    if(v[i]<=j) f[i][j][p]|=f[i-1][j-v[i]][p+1];
                }
                else f[i][j][p]|=f[i-1][j][0];
                if(f[i][j][p]) flag= true;
            }
        if(!flag) {
            res=i-1;
            break;
        }
    }
    cout<<res<<endl;
    return 0;
}














