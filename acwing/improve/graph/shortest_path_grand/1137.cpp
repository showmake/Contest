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

const int N=1e3+10,M=3*1e4+10,inf=0x3f3f3f3f;

int n,m,s,t;
int h[N],e[M],ne[M],w[M],idx;
bool st[N];
int d[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,ne[idx]=h[x],w[idx]=z,h[x]=idx++;
}

int spfa()
{
    memset(d,0x3f,sizeof d);
    memset(st,false,sizeof st);
    d[0]=0;
    queue<int> q;
    st[0]=true;
    q.push(0);
    while(q.size())
    {
        int x=q.front();
        q.pop();
        st[x]=false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]>d[x]+w[i])
            {
                d[y]=d[x]+w[i];
                if(!st[y])
                {
                    st[y]=true;
                    q.push(y);
                }
            }
        }
    }

    if(d[s]==inf) return -1;
    else return d[s];
}

int main()
{
    ios::sync_with_stdio(false);
    while(cin>>n>>m>>s)
    {
        memset(h,-1,sizeof h);
        idx=0;
        for(int i=0;i<m;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            add(x,y,z);
        }
        cin>>t;
        for(int i=0;i<t;i++)
        {
            int x;
            cin>>x;
            add(0,x,0);
        }
        cout<<spfa()<<endl;
    }
    return 0;
}







