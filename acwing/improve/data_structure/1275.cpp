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

const int N=2*1e5+10,M=N<<2;

int n,P,m,q=0;

struct  Segment
{
    int l,r;
    ll maxn;
};

Segment t[M];

inline ll mod (int x)
{
    return (x+q)%P;
}

void build(int p,int l,int r)
{
    t[p].l=l,t[p].r=r;
    if(l==r) return ;
    int mid=l+r>>1;
    build(2*p,l,mid);
    build(2*p+1,mid+1,r);
}

void change(int p,int l,int r,int d)
{
    if(l<=t[p].l&&r>=t[p].r)
    {
        t[p].maxn=d;
        return ;
    }
    int mid=t[p].l+t[p].r>>1;
    if(l<=mid) change(2*p,l,r,d);
    if(r>mid) change(2*p+1,l,r,d);
    t[p].maxn=max(t[2*p].maxn,t[2*p+1].maxn);
}

ll ask(int p,int l,int r)
{
    if(l<=t[p].l&&r>=t[p].r) return t[p].maxn;
    int mid=t[p].l+t[p].r>>1;
    ll res=0;
    if(l<=mid) res=max(res,ask(2*p,l,r));
    if(r>mid) res=max(res, ask(2*p+1,l,r));
    return res;
}


int main()
{
    cin>>m>>P;
    build(1,1,N);
    while(m--)
    {
        char c;
        cin>>c;
        if(c=='A')
        {
            int d;
            cin>>d;
            n++;
            change(1,n,n,mod(d));
        }
        else
        {
            int len;
            cin>>len;
            ll res=ask(1,n-len+1,n);
            q=res;
            cout<<res<<endl;
        }
    }
    return 0;
}




