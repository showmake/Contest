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

const int N=22,M=80;

int n,m,T;
int f[N][M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>T;
    memset(f,0x3f,sizeof f);
    f[0][0]=0;
    for(int i=0;i<T;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        for(int j=n;~j;j--)
            for(int k=m;~k;k--)
                f[j][k]=min(f[j][k],f[max(0,j-a)][max(k-b,0)]+c);
    }
    cout<<f[n][m]<<endl;
    return 0;
}



