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

const int N=1e3+10,M=5*1e3+10;

int n,m;
int f[N];
int h[N],e[M],w[M],ne[M],idx;
int cnt[N];
double d[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

bool spfa(double mid)
{
    memset(d,0x3f,sizeof d);
    memset(cnt,0,sizeof cnt);
    memset(st,false,sizeof st);
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
        st[i]=true;
    }
    while (q.size())
    {
        int x=q.front();q.pop();
        st[x]=false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]>d[x]-f[x]+mid*w[i])
            {
                cnt[y]=cnt[x]+1;
                if(cnt[y]>=n) return true;
                d[y]=d[x]-f[x]+mid*w[i];
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
    memset(h,-1,sizeof h);
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>f[i];
    for(int i=1;i<=m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        add(x,y,z);
    }
    double l=0,r=1e6;
    while (r-l>1e-4)
    {
        double mid=(l+r)/2;
        if(spfa(mid)) l=mid;
        else r=mid;
    }
    printf("%.2lf\n",l);
    return 0;
}












