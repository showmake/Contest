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

const int N=1e3,M=3*1e3;

unordered_map<int,int> H;
int n,m,p;
int h[N],e[M],ne[M],w[M],idx;
int d[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

ll spfa(int S)
{
    memset(d,0x3f,sizeof d);
    memset(st,false,sizeof st);
    st[S]=true;
    d[S]=0;
    queue<int> q;
    q.push(S);
    while (q.size())
    {
        int x=q.front();q.pop();
        st[x]=false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]>d[x]+w[i])
            {
                d[y]=d[x]+w[i];
                if(st[y]) continue;
                st[y]= true;
                q.push(y);
            }
        }
    }
    ll res=0;
    for(auto [k,v]:H) res+=v*d[k];
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>p>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        H[x]++;
    }
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z);
        add(y,x,z);
    }
    ll res=1e9;
    for(int i=1;i<=p;i++) res=min(res,spfa(i));
    cout<<res<<endl;
    return 0;
}







