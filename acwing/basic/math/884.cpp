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

int a[N][N];
int n;
int b[N];

int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<=n;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<n;i++)
    {
        //找第i列的max的idx
        int idx=i;
        for(int k=i;k<n;k++)
            if(a[k][i]) idx=k;
        if(!a[idx][i]) continue;
        swap(a[i],a[idx]);
        for(int k=i+1;k<n;k++)
        {
            if(!a[k][i]) continue;
            for(int j=i;j<=n;j++)
                a[k][j]^=a[i][j];
        }
    }
    for(int i=n-1;~i;i--)
    {
        int y=a[i][n];
        for(int j=i+1;j<n;j++) y^=a[i][j]*b[j];
        int x=a[i][i];
        if(!x&&!y)
        {
            puts("Multiple sets of solutions");
            return 0;
        }
        else if(!x&&y)
        {
            puts("No solution");
            return 0;
        }
        else b[i]=y/x;
    }
    for(int i=0;i<n;i++) printf("%d\n",b[i]);
    return 0;
}






