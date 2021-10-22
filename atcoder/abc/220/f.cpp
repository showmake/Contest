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

const int N=2*1e5+10,M=N*2;

int n;
int level[N],cnt[N];
int h[N],e[M],ne[M],idx;
bool st[N];
int max_level=0;

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

void bfs()
{
    queue<int> q;
    q.push(1);
    cnt[0]=1;
    while(q.size())
    {
        int x=q.front();q.pop();
        st[x]=true;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(st[y]) continue;
            level[y]=level[x]+1;
            max_level=max(max_level,level[y]);
            cnt[level[y]]++;
            q.push(y);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    memset(h,-1,sizeof h);
    for(int i=0;i<n-1;i++)
    {
        int x,y;
        cin>>x>>y;
        add(x,y);
        add(y,x);
    }
    bfs();
    for(int i=1;i<=n;i++)
    {
        ll res=0;
        for(int j=0;j<=max_level;j++)
        {
            if(j==level[i])
            {
                res+=2*j*(cnt[j]-1);
            }
            else
            {
                res+=abs(level[i]-j)*cnt[j];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}



