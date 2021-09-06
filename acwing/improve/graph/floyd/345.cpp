#pragma GCC optimize(2)
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=210,M=110;

int n,m,s,t;
unordered_map<int,int> h;
int id,cnt;
int d1[N],d2[N];

struct Edge
{
    int x,y,w;
}e[M];

int bellman_ford()
{
    memset(d1,0x3f,sizeof d1);
    d1[s]=0;
    for(int i=1;i<=n;i++)
    {
        memcpy(d2,d1,sizeof d1);
        memset(d1,0x3f,sizeof d1);
        for(int j=0;j<m;j++)
        {
            d1[e[j].x]=min(d1[e[j].x],d2[e[j].y]+e[j].w);
            d1[e[j].y]=min(d1[e[j].y],d2[e[j].x]+e[j].w);
        }
    }
    return d1[t];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>s>>t;
    h[s]=id++,h[t]=id++;
    s=h[s],t=h[t];
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>z>>x>>y;
        if(!h.count(x)) h[x]=id++;
        if(!h.count(y)) h[y]=id++;
        x=h[x],y=h[y];
        e[cnt++]={x,y,z};
    }
    cout<<bellman_ford()<<endl;
    return 0;
}








