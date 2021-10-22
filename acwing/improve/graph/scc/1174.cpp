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

const int N=1e4+10,M=6*N;

int n,m;
int h[N],e[M],ne[M],idx=0;
int id[N],cnt,indeg[N],nums[N];
pii Edge[M];
int stk[N],timestamp=0,in_stk[N],top=0;
int dfn[N],low[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

void tarjan(int u)
{
    dfn[u]=low[u]=++timestamp;
    stk[++top]=u,in_stk[u]=1;
    for(int i=h[u];~i;i=ne[i])
    {
        int v=e[i];
        if(!dfn[v])
        {
            tarjan(v);
            low[u]=min(low[u],low[v]);
        }
        else if(in_stk[v])
            low[u]=min(low[u],dfn[v]);
    }

    if(dfn[u]==low[u])
    {
        int num=0;
        int y;
        cnt++;
        do
        {
            y=stk[top--];
            in_stk[y]=false;
            id[y]=cnt;
            num++;
        } while(y!=u);
        nums[id[u]]=num;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        add(x,y);
        Edge[i]={x,y};
    }
    for(int i=1;i<=n;i++)
        if(!dfn[i]) tarjan(i);

    for(int i=0;i<m;i++)
    {
        pii item=Edge[i];
        int u=item.first,v=item.second;
        if(id[u]!=id[v]) indeg[id[u]]++;
    }

    bool flag=false;
    int final=-1;
    for(int i=1;i<=cnt;i++)
    {
        if(!indeg[i])
        {
            if(flag)
            {
                final=-1;
                break;
            }
            else
            {
                flag=true;
                final=i;
            }
        }
    }
    if(final==-1) cout<<0<<endl;
    else cout<<nums[final]<<endl;
    return 0;
}













