#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=110,M=1e5+10;

int n;
int cost[N];
bool f[M];


int main()
{
    ios::sync_with_stdio(false);
    //freopen("test.in","r",stdin);
    //freopen("test1.out","w",stdout);
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>cost[i];
        sum+=cost[i];
    }
    f[0]=true;
    for(int i=1;i<=n;i++)
        for(int j=M-1;j>=cost[i];j--)
            f[j]|=f[j-cost[i]];
    int res=sum;
    for(int i=1;i<M;i++)
       if(f[i]) res=min(res,max(i,sum-i));
    cout<<res<<endl;
    return 0;
}

