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

const int N=2*1e5+10;

int n,m;
int h[N],e[N],ne[N],idx;
int deg[N],res[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

int bfs()
{
    int cnt=0;
    priority_queue<int,vector<int>,greater<int>> q;
    for(int i=1;i<=n;i++)
        if(!deg[i])
            q.push(i);

    while(q.size())
    {
        int x=q.top();q.pop();
        res[++cnt]=x;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(--deg[y]==0) q.push(y);
        }
    }
    if(cnt==n) return 0;
    else return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        add(x,y);
        deg[y]++;
    }
    if(bfs()==-1) cout<<-1<<endl;
    else
    {
        for(int i=1;i<=n;i++) cout<<res[i]<<' ';
    }
    return 0;
}



