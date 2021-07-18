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

const int N=310,M=8000;

struct Edge
{
    int u,v,w;
    bool operator < (const Edge &rms) const { return w<rms.w ;}
}e[M];

int n,m;
int f[N];
int cnt=0,maxn=0;

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

void kruskal()
{
    for(int i=1;i<=n;i++) f[i]=i;
    sort(e,e+m);
    for(int i=0;i<m;i++)
    {
        int u=e[i].u,v=e[i].v,w=e[i].w;
        int fx=get(u),fy=get(v);
        if(fx!=fy)
        {
            cnt++;
            f[fx]=fy;
            maxn=max(maxn,w);
        }
    }
    return ;
}

int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++) cin>>e[i].u>>e[i].v>>e[i].w;
    kruskal();
    cout<<cnt<<' '<<maxn<<endl;
    return 0;
}




