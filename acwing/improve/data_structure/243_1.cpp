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

const int N=1e5+10,M=N<<2;

int n,m;
struct Segment {
    int l=0,r=0,add=0;
    ll sum=0;
};

Segment t[M];
int a[N];

void build(int p,int l,int r)
{
    t[p].l=l,t[p].r=r;
    if(l==r)
    {
        t[p].sum=a[l];
        return ;
    }
    int mid=l+r>>1;
    build(2*p,l,mid);
    build(2*p+1,mid+1,r);
    t[p].sum=t[p*2].sum+t[2*p+1].sum;
    return ;
}

void spread(int p)
{
    if(!t[p].add) return ;
    t[p*2].sum+=1ll*t[p].add*(t[2*p].r-t[p*2].l+1);
    t[p*2+1].sum+=1ll*t[p].add*(t[2*p+1].r-t[p*2+1].l+1);
    t[p*2].add+=t[p].add;
    t[p*2+1].add+=t[p].add;
    t[p].add=0;
}

void change(int l,int r,int d,int p)
{
    if(l<=t[p].l&&r>=t[p].r)
    {
        t[p].sum+=1ll*(t[p].r-t[p].l+1)*d;
        t[p].add+=d;
        return ;
    }
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid) change(l,r,d,p*2);
    if(r>mid) change(l,r,d,p*2+1);
    t[p].sum=t[p*2].sum+t[p*2+1].sum;
}

ll ask(int l,int r,int p)
{
    if(l<=t[p].l&&r>=t[p].r) return t[p].sum;
    spread(p);
    int mid=t[p].l+t[p].r>>1;
    ll res=0;
    if(l<=mid) res+= ask(l,r,2*p);
    if(r>mid) res+= ask(l,r,2*p+1);
    return res;
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    build(1,1,n);
    while (m--)
    {
        char c;
        cin>>c;
        if(c=='C')
        {
            int l,r,d;
            cin>>l>>r>>d;
            change(l,r,d,1);
        }
        else if (c=='Q')
        {
            int l,r;
            cin>>l>>r;
            cout<<ask(l,r,1)<<endl;
        }
    }
    return 0;
}




