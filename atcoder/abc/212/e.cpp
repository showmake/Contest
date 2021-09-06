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

const int N=1e5+10;

int n,m,T;
int indeg[N];

struct Node
{
    ll v,s,t;
    Node(ll v,ll s,ll t) :v(v),s(s),t(t){}
    bool operator < (Node &rmp) { return s<rmp.s; };
};

vector<vector<Node>> g(N,vector<Node>(0));
vector<vector<Node>> h(N,vector<Node>(0));

int main()

{
    ios::sync_with_stdio(false);
    cin>>n>>m>>T;
    for(int i=0;i<m;i++)
    {
        ll u,v,s,t;
        cin>>u>>v>>s>>t;
        g[u].push_back(Node(v,s,t));
        h[v].push_back((Node(u,s,t)));
        indeg[u]++;
    }
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        sort(g[i].begin(),g[i].end());
        if(!indeg[i]) q.push(i);
    }
    while (q.size())
    {
        int v=q.front();q.pop();

    }

    return 0;
}


