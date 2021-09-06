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

const int N=1e5+10,M=4*N,mod=100003;

int n,m;
int h[N],e[M],ne[M],idx;
int d[N],cnt[N];
bool st[N];

void bfs()
{
    memset(d,0x3f,sizeof d);
    queue<int> q;
    d[1]=0;
    cnt[1]=1;
    q.push(1);
    while (q.size())
    {
        int x=q.front();q.pop();
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]>d[x]+1)
            {
                d[y]=d[x]+1;
                cnt[y]=cnt[x];
                q.push(y);
            }
            else if(d[y]==d[x]+1) cnt[y]=(cnt[y]+cnt[x])%mod;
        }
    }
}

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
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
        add(x,y),add(y,x);
    }
    bfs();
    for(int i=1;i<=n;i++) cout<<cnt[i]<<endl;
    return 0;
}








