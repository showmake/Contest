#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <cmath>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=70,M=4*1e4;

int n,m;

struct Node
{
    int v,w;
    Node(){}
    Node(int v,int w): v(v),w(w){}
};

Node p[N],q[N][N];
int sz[N],f[M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>m>>n;
    for(int i=1;i<=n;i++)
    {
        int v,w,pre;
        cin>>v>>w>>pre;
        w*=v;
        if(!pre) p[i].v=v,p[i].w=w;
        else q[pre][sz[pre]++]=Node(v,w);
    }
    for(int i=1;i<=n;i++)
    {
        if(!p[i].v) continue;
        for(int j=m;j>=p[i].v;j--)
        {
            for(int k=0;k<(1<<sz[i]);k++)
            {
                int v=p[i].v,w=p[i].w;
                int x=k,y=sz[i]-1;
                while (x)
                {
                    if(x&1)
                    {
                        v+=q[i][y].v;
                        w+=q[i][y].w;
                    }
                    x>>=1;
                    y--;
                }
                if(j>=v) f[j]=max(f[j],f[j-v]+w);
            }
        }
    }
    cout<<f[m]<<endl;
    return 0;
}


