//
// Created by zhuzhen on 2021/5/23.
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

const int N=1e6+10,M=1e4;

struct  Edge
{
    int x,y,w;
    bool  operator < (const Edge &rms) const { return w<rms.w;}
}e[M];

int n,m;
int a,b,c,d;
int f[N];
int idx,res,cnt;

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

void kruskal()
{
    sort(e,e+idx);
    for(int i=0;i<idx;i++)
    {
        if(!cnt) break;
        int x=e[i].x,y=e[i].y,w=e[i].w;
        int fx=get(x),fy=get(y);
        if(fx!=fy)
        {
            res+=w;
            f[fx]=fy;
            cnt--;
        }
    }
    return ;
}

int main()
{
    cin>>n>>m;
    cnt=n*m-1;
    for(int i=1;i<=n*m;i++) f[i]=i;
    for(int i=1;i<n;i++)
        for(int j=1;j<m;j++)
        {
            e[idx].x=(i-1)*n+j,e[idx].y=i*n+j,e[idx].w=1;
            idx++;
            e[idx].x=(i-1)*n+j,e[idx].y=(i-1)*n+j+1,e[idx].w=2;
            idx++;
        }
    while (cin>>a>>b>>c>>d)
    {
        int x=(a-1)*n+b,y=(c-1)*n+d;
        int fx=get(x),fy=get(y);
        f[fx]=fy;
        cnt--;
    }
    kruskal();
    cout<<res<<endl;
    return 0;
}




