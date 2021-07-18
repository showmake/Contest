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

const int M=2*1e4+10,N=31;

int f[M],v[N];
int n,m;

int main()
{
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=n;i++)
        for(int j=m;j>=v[i];j--)
            f[j]=max(f[j],f[j-v[i]]+v[i]);
    cout<<m-f[m]<<endl;
    return 0;
}



