//
// Created by zhuzhen on 2021/5/31.
//
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

const int N=3100;

int n;
int a[N],b[N];
int f[N][N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    for(int i=1;i<=n;i++)
    {
        int maxv=0;
        for (int j = 1; j <= n; j++)
        {
            f[i][j] = f[i - 1][j];
            //可以发生转移  f[i-1][k] k从1～j 并且b[j]<a[i] 这个值由maxv维护
            if (a[i] == b[j]) f[i][j]=max(f[i][j],maxv+1)  ;
            //可以更新maxv
            if(a[i]>b[j]) maxv=max(maxv,f[i-1][j]) ;
        }
    }
    int res=0;
    for(int i=1;i<=n;i++) res=max(f[n][i],res);
    cout<<res<<endl;
    return 0;
}




