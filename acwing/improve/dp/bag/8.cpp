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

const int N=110;

int n,m,d;
int f[N][N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>d;
    for(int i=0;i<n;i++)
    {
        int v,s,w;
        cin>>v>>s>>w;
        for(int j=m;j>=v;j--)
            for(int k=d;k>=s;k--)
                f[j][k]=max(f[j][k],f[j-v][k-s]+w);
    }
    cout<<f[m][d]<<endl;
    return 0;
}





