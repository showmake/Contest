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

const int N=1e5+10,M=5*1e5+10,inf=0x3f3f3f3f;

int n,m;
int h[N],e[M],ne[M],idx;
int rh[N],re[M],rne[M],ridx;
int w[N],d_min[N],d_max[N];
bool st[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

inline void radd(int x,int y)
{
    re[ridx]=y,rne[ridx]=rh[x],rh[x]=ridx++;
}

void spfa(int flag,int d[],int h[],int e[],int ne[],int start)
{
    memset(st,false,sizeof st);
    queue<int> q;
    d[start]=w[start];
    q.push(start);
    st[start]=true;
    while(q.size())
    {
        int x=q.front();q.pop();
        st[x]=false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(flag)
            {
                if(d[y]<d[x]||d[y]==0)
                {
                    d[y]=max(d[x],w[y]);
                    if(!st[y])
                    {
                        q.push(y);
                        st[y]= true;
                    }
                }
            }
            else
            {
                if(d[y]>d[x]||d[y]==inf)
                {
                    d[y]=min(d[x],w[y]);
                    if(!st[y])
                    {
                        q.push(y);
                        st[y]=true;
                    }
                }
            }
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>w[i];

    memset(h,-1,sizeof h);
    memset(rh,-1,sizeof rh);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y);
        radd(y,x);
        if(z==2)
        {
            add(y,x);
            radd(x,y);
        }
    }

    memset(d_max,0,sizeof d_max);
    memset(d_min,0x3f,sizeof d_min);
    spfa(0,d_min,h,e,ne,1);
    spfa(1,d_max,rh,re,rne,n);
    int res=0;
    for(int i=1;i<=n;i++)
    {
        res=max(res,d_max[i]-d_min[i]);
    }
    cout<<res<<endl;
    return 0;
}









