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

const int N=110;

int n;
int g[N][N],d[N];
bool st[N];

int prim()
{
    memset(st,false,sizeof st);
    memset(d,0x3f,sizeof d);
    int res=0;
    d[1]=0;
    for(int i=0;i<n;i++)
    {
        int t=-1;
        for(int j=1;j<=n;j++)
            if(!st[j]&&(t==-1||d[t]>d[j])) t=j;
        st[t]=true;
        res+=d[t];
        for(int j=1;j<=n;j++)
            if(!st[j]) d[j]=min(g[t][j],d[j]);
    }
    return res;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>g[i][j];
    cout<<prim()<<endl;
    return 0;
}
/*
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

const int N=110,M=1e4+10;

int n;
int h[N],e[M],w[M],ne[M],idx;
int d[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int prim()
{
    int res=0;
    memset(d,0x3f,sizeof d);
    d[1]=0;
    priority_queue<pii,vector<pii>,greater<pii>> heap;
    heap.push({0,1});
    while (heap.size())
    {
        auto cur=heap.top();heap.pop();
        int x=cur.second,dist=cur.first;
        if(st[x]) continue;
        st[x]=true;
        res+=dist;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(st[y]) continue;
            if(d[y]>w[i])
            {
                d[y]=w[i];
                heap.push({d[y],y});
            }
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    memset(h,-1,sizeof h);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            int z;
            cin>>z;
            if(i==j) continue;
            add(i,j,z);
        }
    cout<<prim()<<endl;
        return 0;
}
*/







