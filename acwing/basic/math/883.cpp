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

const int N=110;
const double eps=1e-6;

double a[N][N];
int n;
double b[N];

bool cmp(double x,double  y)
{
    if(abs(x-y)<eps) return true;
    else return false;
}

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<=n;j++)
            scanf("%lf",&a[i][j]);
    for(int i=0;i<n;i++)
    {
        //找第i列的max的idx
        int idx=i;
        for(int k=i+1;k<n;k++)
            if(abs(a[k][i])>abs(a[idx][i])) idx=k;
        if(cmp(a[idx][i],0)) continue;
        swap(a[i],a[idx]);
        double d=a[i][i];
        for(int j=i;j<=n;j++) a[i][j]/=d;
        for(int k=i+1;k<n;k++)
        {
            double s=a[k][i];
            for(int j=i;j<=n;j++)
                a[k][j]-=s*a[i][j];
        }
    }
    for(int i=n-1;~i;i--)
    {
        double y=a[i][n];
        for(int j=i+1;j<n;j++) y-=a[i][j]*b[j];
        double x=a[i][i];
        if(cmp(x,0)&&cmp(y,0))
        {
            puts("Infinite group solutions");
            return 0;
        }
        else if(cmp(x,0)&&!cmp(y,0))
        {
            puts("No solution");
            return 0;
        }
        else b[i]=y/x;
    }
    for(int i=0;i<n;i++) printf("%.2lf\n",b[i]);
    return 0;
}





