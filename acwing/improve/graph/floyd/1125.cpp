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
using pdd =pair<double,double>;

const int N=200,inf=0x3f3f3f3f;

int n;
pdd pos[N];
char g[N][N];
double d[N][N],maxd[N];

double get(double x1,double y1,double x2,double y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>pos[i].first>>pos[i].second;
    for(int i=1;i<=n;i++) cin>>g[i]+1;

    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            if(i==j) d[i][i]=0;
            else if(g[i][j]=='1') d[i][j]= get(pos[i].first,pos[i].second,pos[j].first,pos[j].second);
            else if(g[i][j]=='0') d[i][j]=inf;
        }

    for(int k=1;k<=n;k++)
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)
                d[i][j]=min(d[i][j],d[i][k]+d[k][j]);

    double res=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(d[i][j]<inf/2)
            {
                res=max(res,d[i][j]);
                maxd[i]=max(maxd[i],d[i][j]);
            }

    double ans=inf;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(d[i][j]>inf/2)
            {
                ans=min(ans,maxd[i]+maxd[j]+get(pos[i].first,pos[i].second,pos[j].first,pos[j].second));
            }

    printf("%.6lf\n",max(res,ans));
    return 0;
}










