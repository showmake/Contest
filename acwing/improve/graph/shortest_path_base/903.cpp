#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=2510,M=6210;

int n,m,S,T;
int h[N],e[M],ne[M],w[M],idx;
int d[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

ll dijkstra()
{
    priority_queue<pii,vector<pii>,greater<pii>> heap;
    d[S]=0;
    heap.push({0,S});
    while (heap.size())
    {
        pii cur=heap.top();heap.pop();
        int x=cur.second,dist=cur.first;
        if(x==T) break;
        if(st[x]) continue;
        st[x]=true;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(st[y]) continue;
            if(d[x]+w[i]<d[y])
            {
                d[y]=d[x]+w[i];
                heap.push({d[y],y});
            }
        }
    }
    return d[T];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>S>>T;
    memset(d,0x3f,sizeof d);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z);
        add(y,x,z);
    }
    cout<<dijkstra()<<endl;
    return 0;
}







