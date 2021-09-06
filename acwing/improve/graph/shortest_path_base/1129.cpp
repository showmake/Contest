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

const int N=2510,M=13000;

int n,m,S,T;
int h[N],e[M],ne[M],w[M],idx;
int d[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

ll spfa()
{
    memset(d,0x3f,sizeof d);
    memset(st,false,sizeof st);
    queue<int> q;
    d[S]=0;
    q.push(S);
    st[S]=true;
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
                q.push(y);
                st[y]=true;
            }
        }
    }
    return d[T];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>S>>T;

    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z);
        add(y,x,z);
    }
    cout<<spfa()<<endl;
    return 0;
}







