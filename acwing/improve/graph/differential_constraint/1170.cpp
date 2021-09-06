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

const int N=1e3+10,M=1e5+10,inf=0x3f3f3f3f;

int n,m,k;
int h[N],e[M],ne[M],w[M],idx;
int sum,cnt[N];
ll d[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

bool spfa()
{
    memset(d,0x3f,sizeof d);
    d[1]=0;
    stack<int> q;
    for(int i=1;i<=n;i++) st[i]= true,q.push(i);
    while (q.size())
    {
        int x=q.top();q.pop();
        st[x]= false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]>d[x]+w[i])
            {
                cnt[y]=cnt[x]+1;
                if(cnt[y]>=n) return true;
                d[y]=d[x]+w[i];
                if(!st[y])
                {
                    st[y]=true;
                    q.push(y);
                }
            }
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>k;
    memset(h,-1,sizeof h);
    for(int i=1;i<n;i++) add(i+1,i,0);
    for(int i=0;i<m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y) swap(x,y);
        add(x,y,z);
    }
    for(int i=0;i<k;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(x>y) swap(x,y);
        add(y,x,-z);
    }
    if(spfa()) cout<<-1<<endl;
    else
    {
        bool flag=true;
        for(int i=1;i<=n;i++)
            if(d[i]>inf/2)
            {
                cout<<-2<<endl;
                flag= false;
                break;
            }
        if(flag) cout<<d[n]<<endl;
    }
    return 0;
}












