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
using pll =pair<ll,ll>;
using pdd = pair<long double,long double>;

const int N=2*1e5+10;

int n;
ll a[N];
pii pos[N];
pdd f[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    f[0]={1.0,0.0};
    for(int i=1;i<=n;i++)
    {
        long double x=f[i-1].first,y=f[i-1].second;
        if(x>=y/a[i])
        {
            f[i].first=x;
            pos[i].first=0;
        }
        else
        {
            f[i].first=y/a[i];
            pos[i].first=1;
        }
        if(y/a[i]>=x)
        {
            f[i].second=y;
            pos[i].second=0;
        }
        else
        {
            f[i].second=1ll*x*a[i];
            pos[i].second=1;
        }
    }
    vector<int> res;
    int x=pos[n].first;
    bool flag=true;
    for(int i=n;i;i--)
    {
        res.push_back(x);
        if(x==1)
        {
            if(flag)
            {
                x=pos[i-1].second;
                flag=false;
            }
            else
            {
                x=pos[i-1].first;
                flag=true;
            }
        }
        else
        {
            if(flag) x=pos[i-1].first;
            else x=pos[i-1].second;
        }
    }
    for(int i=n-1;~i;i--) cout<<res[i]<<' ';
    cout<<endl;
    return 0;
}