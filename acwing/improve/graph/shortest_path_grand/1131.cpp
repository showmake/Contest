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

const int N=110,M=4*N+1,inf=0x3f3f3f3f;
const int dx[4]={-1,1,0,0},dy[4]={0,0,1,-1};

int n,m,k,p,s;
int h[N],e[M],ne[M],w[M],idx;
set<pii> H;
int key[N];
int d[N][1<<10];
bool st[N][1<<10];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

int bfs()
{
    memset(d,0x3f,sizeof d);
    deque<pii> dq;
    st[1][0]=true;
    dq.push_back({1,0});
    d[1][0]=0;
    while(dq.size())
    {
        pii cur=dq.front();dq.pop_front();
        int x=cur.first,state=cur.second;
        if(x==n*m) return d[x][state];
        if(!st[x][state|key[x]])
        {
            if(d[x][state|key[x]]>d[x][state])
            {
                dq.push_front({x,state|key[x]});
                st[x][state|key[x]]=true;
                d[x][state|key[x]]=d[x][state];
            }
        }
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(w[i]==-1) continue;
            else if(w[i]==p)
            {
                if(st[y][state]) continue;
                if(d[y][state]>d[x][state]+1)
                {
                    dq.push_back({y,state});
                    d[y][state]=d[x][state]+1;
                    st[y][state]=true;
                }
            }
            else
            {
                if(((state>>w[i])&1)==0) continue;
                if(st[y][state]) continue;
                if(d[y][state]>d[x][state]+1)
                {
                    dq.push_back({y,state});
                    d[y][state]=d[x][state]+1;
                    st[y][state]= true;
                }
            }
        }
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m>>p>>k;
    memset(h,-1,sizeof h);
    for(int i=0;i<k;i++)
    {
        int x1,y1,x2,y2,g;
        cin>>x1>>y1>>x2>>y2>>g;
        add((x2-1)*m+y2,(x1-1)*m+y1,g-1);
        add((x1-1)*m+y1,(x2-1)*m+y2,g-1);
        H.insert({(x1-1)*m+y1,(x2-1)*m+y2});
        H.insert({(x2-1)*m+y2,(x1-1)*m+y1});
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            for(int q=0;q<4;q++)
            {
                int x=dx[q]+i,y=dy[q]+j;
                if(x<=0||x>n||y<=0||y>m) continue;
                int X=(i-1)*m+j,Y=(x-1)*m+y;
                if(H.count({X,Y})||H.count({Y,X})) continue;
                add(X,Y,p),add(Y,X,p);
            }
    cin>>s;
    for(int i=0;i<s;i++)
    {
        int x,y,q;
        cin>>x>>y>>q;
        key[(x-1)*m+y]|=1<<(q-1);
    }

    cout<<bfs()<<endl;
    return 0;
}








