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

const int N=2*1e5+10,M=1e6+10,mod=1e9+7;

int n,m;

ll cnt[N];
int h[N],e[M],ne[M],idx;
bool st[N],used[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

queue<int> q;

int main()
{
    scanf("%d%d",&n,&m);
    memset(h,-1,sizeof h);
    for(int i=0;i<m;i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        add(x,y);
        add(y,x);
    }
    q.push(1);
    st[1]=true;
    used[1]=true;
    cnt[1]=1;
    while (q.size())
    {
        int len=q.size();
        memcpy(used,st,sizeof st);
        for(int i=0;i<len;i++)
        {
            int x=q.front();q.pop();
            for(int j=h[x];~j;j=ne[j])
            {
                int y=e[j];
                if(st[y]) continue;
                if(!used[y]) q.push(y);
                used[y]=true;
                cnt[y]=(cnt[y]+cnt[x])%mod;
            }
        }
        memcpy(st,used,sizeof st);
        if(st[n]) break;
    }
    if(st[n]) cout<<cnt[n]<<endl;
    else cout<<0<<endl;
    return 0;
}