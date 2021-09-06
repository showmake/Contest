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

const int N=110,inf=0x3f3f3f3f;

int n,m;
int d[N][N],g[N][N],pos[N][N];
vector<int> path;

void get_path(int x,int y)
{
    if(!pos[x][y]) return ;
    get_path(x,pos[x][y]);
    path.emplace_back(pos[x][y]);
    get_path(pos[x][y],y);
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    memset(g,0x3f,sizeof g);
    while (m--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        g[x][y]=g[y][x]=min(g[x][y],z);
    }
    for(int i=1;i<=n;i++) g[i][i]=0;
    memcpy(d,g,sizeof g);
    int res=inf;
    for(int k=1;k<=n;k++)
    {
        for(int i=1;i<k;i++)
            for(int j=i+1;j<k;j++)
                if(res>(ll)d[i][j]+g[j][k]+g[k][i])
                {
                    res=d[i][j]+g[j][k]+g[k][i];
                    path.clear();
                    path.emplace_back(i);
                    get_path(i,j);
                    path.emplace_back(j);
                    path.emplace_back(k);
                }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                if(d[i][j]>d[i][k]+d[k][j])
                {
                    d[i][j]=d[i][k]+d[k][j];
                    pos[i][j]=k;
                }
    }
    if(res==inf) puts("No solution.");
    else
    {
        for(auto &p:path) cout<<p<<' ';
        cout<<endl;
    }
    return 0;
}










