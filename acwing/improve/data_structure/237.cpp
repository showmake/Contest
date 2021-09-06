//
// Created by zhuzhen on 2021/5/20.
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

unordered_map<int,int> h;

const int N=1e6+10;

struct Relation
{
    int x,y,e;
    Relation(){}
    Relation(int x,int y,int e):x(x),y(y),e(e){}
}r[N];

int n,T;
int f[N];

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

int main()
{
    cin>>T;
    while(T--)
    {
        cin>>n;
        int cnt=0;
        bool flag=true;
        h.clear();
        for(int i=0;i<n;i++)
        {
            int x,y,e;
            cin>>x>>y>>e;
            if(!h.count(x)) h[x]=++cnt;
            x=h[x];
            if(!h.count(y)) h[y]=++cnt;
            y=h[y];
            r[i]=Relation(x,y,e);
        }
        for(int i=1;i<=cnt;i++) f[i]=i;
        auto cmp=[&](Relation &u,Relation &v) { return u.e>v.e; };
        sort(r,r+n,cmp);
        for(int i=0;i<n;i++)
        {
            int fx=get(r[i].x),fy=get(r[i].y),e=r[i].e;
            if(e)
            {
                if(fx==fy) continue;
                else f[fx]=fy;
            }
            else
            {
                if(fx==fy)
                {
                    flag=false;
                    //cout<<r[i].x<<' '<<r[i].y<<' '<<fx<<endl;
                    break;
                }
            }
        }
        if(flag) puts("YES");
        else puts("NO");
    }
    return 0;
}




