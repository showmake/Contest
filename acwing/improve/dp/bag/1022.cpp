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

const int N=1e3+10,M=510,K=110;

int n,m,k;
int v[K],w[K];
int f[N][M];
int res,ans;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    res=0,ans=m;
    for(int i=1;i<=k;i++) cin>>v[i]>>w[i];
    for(int i=1;i<=k;i++)
        for(int j=n;j>=v[i];j--)
            for(int p=m-1;p>=w[i];p--)
            {
                if(f[j-v[i]][p-w[i]]+1>f[j][p])
                    f[j][p]=f[j-v[i]][p-w[i]]+1;
                if(res<f[j][p]||res==f[j][p]&&m-p>ans)
                {
                    res=f[j][p];
                    ans=m-p;
                    //cout<<res<<' '<<ans<<endl;
                }
            }
    cout<<res<<' '<<ans<<endl;
    return 0;
}




