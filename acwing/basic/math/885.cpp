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

const int N=2*1e3+10,mod=1e9+7;

ll c[N][N];
int n;

int main()
{
    ios::sync_with_stdio(false);
    c[0][0]=1;
    for(int i=1;i<N;i++)
        for(int j=0;j<=i;j++)
        {
            if(!j) c[i][j]=1;
            else c[i][j]=(c[i-1][j]+c[i-1][j-1])%mod;
        }
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        cout<<c[a][b]<<endl;
    }
    return 0;
}





