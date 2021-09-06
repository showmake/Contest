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

const int N=2*1e3+10,M=1e4;

struct  Edge
{
    int x,y,w;
    bool operator <(const Edge &rms) const { return w<rms.w ;}
}e[M];

int n,m;
int f[N];
int res,cnt;

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

void kruskal()
{
    sort(e,e+cnt);
    for(int i=0;i<cnt;i++)
    {
        int x=e[i].x,y=e[i].y,w=e[i].w;
        int fx=get(x),fy=get(y);
        if(fx!=fy)
        {
            res+=w;
            f[fx]=fy;
        }
    }
    return ;
}


int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) f[i]=i;
    for(int i=0;i<m;i++)
    {
        int p,x,y,w;
        cin>>p>>x>>y>>w;
        if(p==1)
        {
            res+=w;
            int fx=get(x),fy=get(y);
            f[fx]=fy;
        }
        else
        {
            e[cnt].x=x,e[cnt].y=y,e[cnt].w=w;
            cnt++;
        }
    }
    kruskal();
    cout<<res<<endl;
    return 0;
}




