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

const int N=1e5+10,M=20;

int n,m;
int p[M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>p[i];
    ll res=0;
    for(int i=1;i<1<<m;i++)
    {
        ll cnt=0,mul=1;
        for(int j=0;j<m;j++)
        {
            if(i&(1<<j))
            {
                cnt++;
                mul*=p[m-1-j];
            }
        }
        if(cnt%2) res+=n/mul;
        else res-=n/mul;
    }
    cout<<res<<endl;
    return 0;
}





