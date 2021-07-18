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

const int N=9,M=20,inf=1e9;

int n,m=8;
double g[N][N],f[N][N][N][N][M];

inline double get(int x1,int y1,int x2,int y2)
{
    return g[x2][y2]-g[x1-1][y2]-g[x2][y1-1]+g[x1-1][y1-1];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=m;j++)
        {
            cin>>g[i][j];
            g[i][j]+=g[i-1][j]+g[i][j-1]-g[i-1][j-1];
        }
    for(int len=1;len<=m;len++)
        for(int width=1;width<=m;width++)
            for(int x=1;x+len-1<=m;x++)
                for(int y=1;y+width-1<=m;y++)
                {
                    for(int i=0;i<=n;i++)
                    {
                        int s=x+len-1,t=y+width-1;
                        if(!i)
                        {
                            f[x][y][s][t][i]=get(x,y,s,t)*get(x,y,s,t);
                            continue;
                        }
                        double& tmp=f[x][y][s][t][i];
                        tmp=inf;
                        //横着切
                        for(int k=x;k<s;k++)
                        {
                            tmp=min(tmp,f[x][y][k][t][i-1]+get(k+1,y,s,t)*get(k+1,y,s,t));
                            tmp=min(tmp,f[k+1][y][s][t][i-1]+get(x,y,k,t)*get(x,y,k,t));
                        }
                        //竖着切
                        for(int k=y;k<t;k++)
                        {
                            tmp=min(tmp,f[x][y][s][k][i-1]+get(x,k+1,s,t)*get(x,k+1,s,t));
                            tmp=min(tmp,f[x][k+1][s][t][i-1]+get(x,y,s,k)*get(x,y,s,k));
                        }
                    }
                }
    double ave=g[m][m]/n;
    double res=sqrt(f[1][1][m][m][n-1]/n-ave*ave);
    printf("%.3lf\n",res);
    return 0;
}



