//
// Created by zhuzhen on 2021/5/18.
//
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

const int N=2*1e5+10;

struct  Segment
{
    int l,r;
    ll sum,val;
};

Segment t[N<<2];
int n,T,m;
ll a[N];

void build(int p,int l,int r)
{
    if(l)
        t[p].l=l,t[p].r=r;
    if(l==r)
    {
        t[p].sum=a[l];
        t[p].val=l*a[l];
        if(l%2==0)
        {
            t[p].sum=-t[p].sum;
            t[p].val=-t[p].val;
        }
        return ;
    }
    int mid=l+r>>1;
    build(p*2,l,mid);
    build(p*2+1,mid+1,r);
    t[p].sum=t[p*2].sum+t[p*2+1].sum;
    t[p].val=t[p*2].val+t[p*2+1].val;
}

void change(int p,int x,ll y)
{
    if(t[p].l==t[p].r)
    {
        t[p].sum=y;
        t[p].val=x*y;
        if(x%2==0)
        {
            t[p].sum=-t[p].sum;
            t[p].val=-t[p].val;
        }
        return ;
    }
    int mid=t[p].l+t[p].r>>1;
    if(x<=mid) change(p*2,x,y);
    else change(p*2+1,x,y);
    t[p].sum=t[p*2].sum+t[p*2+1].sum;
    t[p].val=t[p*2].val+t[p*2+1].val;
}

Segment ask(int p,int l,int r)
{
    if(l<=t[p].l&&r>=t[p].r) return t[p];
    int mid=t[p].l+t[p].r>>1;
    if(l>mid) return ask(p*2+1,l,r);
    else if(r<=mid) return ask(p*2,l,r);
    else
    {
        Segment res,left,right;
        left = ask(p*2,l,r);
        right= ask(p*2+1,l,r);
        res.sum=left.sum+right.sum;
        res.val=left.val+right.val;
        return res;
    }
}

int main()
{
    cin>>T;
    for(int cnt=1;cnt<=T;cnt++)
    {
        memset(t,0,sizeof t);
        ll res=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++) cin>>a[i];
        build(1,1,n);
        while(m--)
        {
            char c;
            cin>>c;
            if(c=='Q')
            {
                int l,r;
                cin>>l>>r;
                Segment ans=ask(1,l,r);
                ll t=ans.val-ans.sum*(l-1);
                if(l%2==0) t=-t;
                res+=t;
            }
            else if(c=='U')
            {
                ll x,y;
                cin>>x>>y;
                change(1,x,y);
            }
        }
        cout<<"Case #"<<cnt<<": "<<res<<endl;
    }
    return 0;
}


