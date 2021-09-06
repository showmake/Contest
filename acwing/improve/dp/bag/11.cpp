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

const int N=1e3+10,mod=1e9+7;

int n,m;
ll f[N],cnt[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<=m;i++) cnt[i]=1;
    for(int i=1;i<=n;i++)
    {
        int v,w;
        cin>>v>>w;
        for(int j=m;j>=v;j--)
        {
            if(f[j-v]+w>f[j])
            {
                f[j]=f[j-v]+w;
                cnt[j]=cnt[j-v];
            }
            else if(f[j-v]+w==f[j])
            {
                cnt[j]=(cnt[j]+cnt[j-v])%mod;
            }
        }
    }
    cout<<cnt[m]<<endl;
    return 0;
}



