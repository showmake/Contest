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

const int N=510,M=N*N;

int n,k;

struct Edge
{
    int x,y;
    double w;
    bool operator < (const Edge& rms) const { return w<rms.w;}
}e[M];

struct Node
{
    int x,y;
}v[N];

int f[N];

double get_dist(double x1,double y1,double x2,double y2)
{
    double tmp=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    return sqrt(tmp);
}

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>k;
    for(int i=0;i<n;i++) cin>>v[i].x>>v[i].y;
    int m=0;
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            e[m++]={i,j,(get_dist(v[i].x,v[i].y,v[j].x,v[j].y))};
    sort(e,e+m);
    for(int i=0;i<n;i++) f[i]=i;
    int cnt=n;
    double res=0;
    for(int i=0;i<m;i++)
    {
        if(cnt<=k) break;
        int x=e[i].x,y=e[i].y;
        double w=e[i].w;
        //cout<<x<<' '<<y<<' '<<w<<endl;
        int fx=get(x),fy=get(y);
        if(fx!=fy)
        {
            res=w;
            f[fx]=fy;
            cnt--;
        }
    }
    printf("%.2lf\n",res);
    return 0;
}










