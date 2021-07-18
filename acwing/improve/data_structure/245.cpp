//
// Created by zhuzhen on 2021/5/19.
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

const int N=5*1e5+10,M=N<<2;

struct  Segment
{
    int l,r;
    ll sum,lmax,rmax,val;
};

int n,m;
int a[N];
Segment t[M];

void pushup(Segment &root,Segment &left,Segment &right)
{
    root.sum=left.sum+right.sum;
    root.val=max(left.rmax+right.lmax,max(left.val,right.val));
    root.lmax=max(left.lmax,left.sum+right.lmax);
    root.rmax=max(left.rmax+right.sum,right.rmax);
}

void build(int p,int l,int r)
{
    t[p].l=l,t[p].r=r;
    if(l==r)
    {
        t[p].sum=t[p].lmax=t[p].rmax=t[p].val=a[l];
        return ;
    }
    int mid=t[p].l+t[p].r>>1;
    build(2*p,l,mid);
    build(2*p+1,mid+1,r);
    pushup(t[p],t[p*2],t[p*2+1]);
}

void change(int p,int x,int y)
{
     if(t[p].l==t[p].r&&t[p].l==x)
     {
         t[p].sum=t[p].lmax=t[p].rmax=t[p].val=y;
         return ;
     }
     int mid=t[p].l+t[p].r>>1;
     if(x<=mid) change(p*2,x,y);
     if(x>mid) change(p*2+1,x,y);
     pushup(t[p],t[p*2],t[p*2+1]);
}

Segment ask(int p,int l,int r)
{
    if(l<=t[p].l&&r>=t[p].r) return t[p];
    int mid=t[p].l+t[p].r>>1;
    if(l>mid) return ask(2*p+1,l,r);
    else if(r<=mid) return ask(2*p,l,r);
    else
    {
        Segment res;
        Segment left=ask(2*p,l,r);
        Segment right=ask(2*p+1,l,r);
        pushup(res,left,right);
        return res;
    }
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while(m--)
    {
        int k;
        cin>>k;
        if(k==1)
        {
            int l,r;
            cin>>l>>r;
            if(l>r) swap(l,r);
            cout<<ask(1,l,r).val<<endl;
        }
        else
        {
            int x,y;
            cin>>x>>y;
            change(1,x,y);
        }
    }
    return 0;
}




