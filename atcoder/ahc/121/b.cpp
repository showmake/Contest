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

const int N=2*1e5+10;

int n;
int r_cnt,g_cnt,b_cnt;
ll r[N],g[N],b[N];

ll get(ll a[],ll b[],int n,int m)
{
    ll res=1e15;
    for(int i=1;i<=n;i++)
    {
        ll x=a[i];
        int l=0,r=m;
        while (l<r)
        {
            int mid=l+r+1>>1;
            if(b[mid]<=x) l=mid;
            else r=mid-1;
        }
        if(!l) res=min(res,b[1]-x);
        else if(l==m) res=min(res,x-b[m]);
        else
        {
            res=min(res,x-b[l]);
            res=min(res,b[l+1]-x);
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<2*n;i++)
    {
        ll a;
        char c;
        cin>>a>>c;
        if(c=='R') r[++r_cnt]=a;
        else if(c=='B') b[++b_cnt]=a;
        else g[++g_cnt]=a;
    }
    ll res=0;
    if(r_cnt%2==0&&g_cnt%2==0&&b_cnt%2==0) cout<<res<<endl;
    else
    {
        sort(g+1,g+g_cnt+1);
        sort(r+1,r+r_cnt+1);
        sort(b+1,b+b_cnt+1);
        if(r_cnt%2==0) res=get(g,b,g_cnt,b_cnt);
        else if(g_cnt%2==0) res=get(r,b,r_cnt,b_cnt);
        else res=get(r,g,r_cnt,g_cnt);
       cout<<res<<endl;
    }
    return 0;
}



