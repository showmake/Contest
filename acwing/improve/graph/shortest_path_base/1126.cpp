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

const int N=2100,M=2*1e5+10;

int n,m,S,T;
int h[N],e[M],ne[M],idx;
double d[N],w[M];
bool st[N];

inline void add(int x,int y,double z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

void spfa()
{
    queue<int> q;
    st[S]=true;
    d[S]=1;
    q.push(S);
    while (q.size())
    {
        int x=q.front();q.pop();
        st[x]=false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]<d[x]*w[i])
            {
                d[y]=d[x]*w[i];
                if(st[y]) continue;
                st[y]= true;
                q.push(y);
            }
        }
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
        double z;
        cin>>x>>y>>z;
        z=(100-z)/100;
        add(x,y,z);
        add(y,x,z);
    }
    cin>>T>>S;
    spfa();
    //cout<<d[T]<<endl;
    printf("%.8lf\n",100/d[T]);
    return 0;
}







