#pragma GCC optimize(2)
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

const int N=1e5+10,M=3*N;

int n,m;
int h[N],e[M],ne[M],w[M],idx;
ll d[N];
int cnt[N];
bool st[N];

inline void add (int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

bool spfa()
{
    memset(d,-0x3f,sizeof d);
    stack<int> q;
    d[0]=0;
    q.push(0);
    st[0]= true;
    while (q.size())
    {
        int x=q.top();q.pop();
        st[x]=false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]<d[x]+w[i])
            {
                cnt[y]=cnt[x]+1;
                if(cnt[y]>=n+1) return true;
                d[y]=d[x]+w[i];
                if(!st[y])
                {
                    q.push(y);
                    st[y]= true;
                }
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y,op;
        cin>>op>>x>>y;
        if(op==1)
        {
            add(x,y,0);
            add(y,x,0);
        }
        else if(op==2)
        {
            add(x,y,1);
        }
        else if(op==3)
        {
            add(y,x,0);
        }
        else if(op==4)
        {
            add(y,x,1);
        }
        else
        {
            add(x,y,0);
        }
    }
    for(int i=1;i<=n;i++) add(0,i,1);
    if(spfa()) cout<<-1<<endl;
    else
    {
        ll res=0;
        for(int i=1;i<=n;i++) res+=d[i];
        cout<<res<<endl;
    }
    return 0;
}












