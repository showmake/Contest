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

const int N=2*1e3+10,M=4*1e6+10;

int h[N],e[M],ne[M],idx;
int n,m;
bool st[N];
ll res;

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

int dfs(int x)
{
    if(st[x]) return 0;
    int res=1;
    st[x]= true;
    for(int i=h[x];~i;i=ne[i]) res+=dfs(e[i]);
    return res;
}

int main()
{
    cin>>n>>m;
    memset(h,-1,sizeof h);
    while (m--)
    {
        int x,y;
        cin>>x>>y;
        add(x,y);
    }
    for(int i=1;i<=n;i++)
    {
        memset(st,false,sizeof st);
        res+=dfs(i);
    }
    cout<<res<<endl;
    return 0;
}


