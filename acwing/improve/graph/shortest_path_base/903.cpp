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

const int N=110;

int n,m;
int g[N][N],level[N];
int d[N];
bool st[N];

int dijkstra(int l,int r)
{
    memset(st,false,sizeof st);
    memset(d,0x3f,sizeof d);
    d[0]=0;
    priority_queue<pii,vector<pii>,greater<pii>> heap;
    heap.push({0,0});
    while(heap.size())
    {
        pii cur=heap.top();heap.pop();
        int x=cur.second;
        if(st[x]) continue;
        st[x]=true;
        for(int i=1;i<=n;i++)
        {
            if(!g[x][i]||st[i]||level[i]<l||level[i]>r) continue;
            if(d[i]>d[x]+g[x][i])
            {
                d[i]=d[x]+g[x][i];
                heap.push({d[i],i});
            }
        }
    }
    return d[1];
}

int spfa(int l,int r)
{
    memset(st,false,sizeof st);
    memset(d,0x3f,sizeof d);
    d[0]=0;
    st[0]=true;
    queue<int> q;
    q.push(0);
    while (q.size())
    {
        int x=q.front();q.pop();
        st[x]=false;
        for(int i=1;i<=n;i++)
        {
            if(!g[x][i]||level[i]<l||level[i]>r) continue;
            if(d[i]>d[x]+g[x][i])
            {
                d[i]=d[x]+g[x][i];
                if(!st[i])
                {
                    q.push(i);
                    st[i]=true;
                }
            }
        }
    }
    return d[1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        int p,l,x;
        cin>>p>>l>>x;
        level[i]=l;
        g[0][i]=p;
        for(int j=0;j<x;j++)
        {
            int v,w;
            cin>>v>>w;
            g[v][i]=w;
        }
    }
    int res=g[0][1];
    for(int i=1;i<=n;i++)
    {
        res=min(res,spfa(i,i+m));
    }
    cout<<res<<endl;
    return 0;
}







