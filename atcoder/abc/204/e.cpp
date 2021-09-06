#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=2*1e5+10;

int n,m;
int h[N],ne[N],idx;
bool st[N];
ll dist[N];

struct Edge
{
    ll y,w,v,t;
}e[N];

struct Vertex
{
    ll x=0,d=0;
    Vertex(){}
    Vertex(ll x,ll d):x(x),d(d){}
};

inline void add(ll x,ll y,ll w,ll v)
{
    e[idx].y=y,e[idx].w=w,e[idx].v=v,e[idx].t=static_cast<ll>(sqrt(v))-1;
    ne[idx]=h[x],h[x]=idx++;
}

void dijkstra()
{
    ll d=0;
    auto cmp=[&](Vertex &u,Vertex &v) { return u.d > v.d; };
    priority_queue<Vertex,vector<Vertex>,decltype(cmp)> q(cmp);
    q.push(Vertex(1,0));
    while (q.size())
    {
        auto cur=q.top();q.pop();
        if(st[cur.x]) continue;
        st[cur.x] = true;
        dist[cur.x]=cur.d;
        d=cur.d+1;
        for(int i=h[cur.x];~i;i=ne[i])
        {
            ll y=e[i].y;
            ll res=d+e[i].w+e[i].v/(d+1);
            for(ll t=e[i].t-1;t<=e[i].t+3;t++)
                if(t>=d) res=min(res,t+e[i].w+e[i].v/(t+1));
            q.push({y,res});
        }
    }
    return ;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    while (m--)
    {
        ll x,y,w,v;
        cin>>x>>y>>w>>v;
        add(x,y,w,v);
        add(y,x,w,v);
    }
    dijkstra();
    if(!st[n]) cout<<-1<<endl;
    else cout<<dist[n]<<endl;
    return 0;
}



