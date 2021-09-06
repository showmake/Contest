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

const int N=20;
const double eps=1e-8;

int n,T,m;
int path[N][N],f[1<<N];

struct Point
{
    double x,y;
}p[N];

inline int cmp(double x,double y)
{
    if(fabs(x-y)<eps) return 0;
    else if(x<y) return -1;
    else return 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        memset(path,0,sizeof path);
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>p[i].x>>p[i].y;
        for(int i=0;i<n;i++)
        {
            path[i][i]=1<<i;
            for(int j=0;j<n;j++)
            {
                if(!cmp(p[i].x,p[j].x)) continue;
                double a=(p[i].y*p[j].x-p[i].x*p[j].y)/(p[i].x*p[j].x*(p[i].x-p[j].x));
                double b=p[i].y/p[i].x-a*p[i].x;
                if(cmp(a,0)>=0) continue;
                for(int k=0;k<n;k++)
                {
                    if(!cmp(p[k].y,a*p[k].x*p[k].x+b*p[k].x))
                        path[i][j]+=1<<k;
                }
            }
        }

        memset(f,0x3f,sizeof f);
        f[0]=0;
        for(int i=0;i+1<1<<n;i++)
        {
            int x=0;
            for(int j=0;j<n;j++)
            {
                if(((i>>j)&1)==0)
                {
                    x=j;
                    break;
                }
            }
            for(int j=0;j<n;j++)
                f[i|path[x][j]]=min(f[i|path[x][j]],f[i]+1);
        }
        cout<<f[(1<<n)-1]<<endl;
    }
    return 0;
}



