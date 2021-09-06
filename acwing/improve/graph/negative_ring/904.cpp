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

const int N=510,M=6000;

int n,m,T,k;

int h[N],e[M],w[M],ne[M],idx;
int d[N],cnt[N];
bool st[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

bool spfa()
{
    memset(d,0x3f,sizeof d);
    memset(st,false,sizeof st);
    memset(cnt,0,sizeof cnt);
    queue<int> q;
    for(int i=1;i<=n;i++)
    {
        q.push(i);
        st[i]= true;
    }
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
                cnt[y]=cnt[x]+1;
                if(cnt[y]==n) return true;
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
    cin>>T;
    while (T--)
    {
        memset(h,-1,sizeof h);
        idx=0;
        cin>>n>>m>>k;
        for(int i=0;i<m;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            add(x,y,z),add(y,x,z);
        }
        for(int i=0;i<k;i++)
        {
            int x,y,z;
            cin>>x>>y>>z;
            add(x,y,-z);
        }
        if(spfa()) puts("YES");
        else puts("NO");
    }
    return 0;
}












