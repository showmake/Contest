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

const int N=2*1e5+10;

int n,m,T;
int h[N],e[N],ne[N],idx;
int c[N],id;
bool st[N];
int q[N];

struct  Edge
{
    int t,x,y;
}edge[N];

int cnt;
int indeg[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        idx=0,cnt=0,id=0;
        int sum=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++)
        {
            h[i]=-1;
            st[i]=false;
            indeg[i]=0;
        }
        for(int i=0;i<m;i++)
        {
            int t,x,y;
            cin>>t>>x>>y;
            edge[i]={t,x,y};
            if(t)
            {
                add(x,y);
                indeg[y]++;
                if(!st[x]) st[x]=true,sum++;
                if(!st[y]) st[y]=true,sum++;
            }
        }
        int k=0;
        int hh=0,tt=-1;
        for(int i=1;i<=n;i++)
            if(!indeg[i]&&st[i])
                q[++tt]=i;
        while(hh<=tt)
        {
            int x=q[hh++];
            c[x]=++id;k++;
            //cout<<x<<endl;
            for(int i=h[x];~i;i=ne[i])
            {
                int y=e[i];
                if(--indeg[y]==0)
                    q[++tt]=y;
            }
        }
        if(k!=sum) puts("NO");
        else
        {
            cout<<"YES"<<endl;
            for(int i=0;i<m;i++)
            {
                int t=edge[i].t,x=edge[i].x,y=edge[i].y;
                if(t) cout<<x<<' '<<y<<endl;
                else
                {
                    if(c[x]>c[y]) cout<<y<<' '<<x<<endl;
                    else cout<<x<<' '<<y<<endl;
                }
            }
        }
    }
    return 0;
}





