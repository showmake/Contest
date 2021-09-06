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

const int N=2*1e5+10,M=N<<2;

ll n,m;
ll cnt,last;

struct  Segment
{
    int l,r;
    ll maxn=-1;
}t[M];

void build(int p,int l,int r)
{
    t[p].l=l,t[p].r=r;
    if(l==r) return ;
    int mid=l+r>>1;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
}

void change(int p,int x)
{
    if(t[p].l==t[p].r)
    {
        t[p].maxn=x;
        return ;
    }
    int mid=t[p].l+t[p].r>>1;
    if(cnt>mid) change(2*p+1,x);
    else change(2*p,x);
    t[p].maxn=max(t[2*p].maxn,t[p*2+1].maxn);
}

ll ask(int p,int l,int r)
{
    if(l<=t[p].l&&t[p].r<=r) return t[p].maxn;
    int mid=t[p].l+t[p].r>>1;
    ll res=-1;
    if(l<=mid) res=max(res,ask(2*p,l,r));
    if(r>mid) res=max(res,ask(2*p+1,l,r));
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    build(1,1,N);
    while(n--)
    {
        char op;
        ll x;
        cin>>op>>x;
        if(op=='A')
        {
            cnt++;
            change(1,(x+last)%m);
        }
        else
        {
            last=ask(1,cnt-x+1,cnt);
            cout<<last<<endl;
        }
    }
    return 0;
}


