//
// Created by zhuzhen on 2021/5/30.
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

const int N=5*1e3+10;

int n,m;
int a[N],f[N][N];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    int p=1;
    for(int i=1;i<=n;i++)
    {
        while (p<i&&a[i]-a[p]>5) p++;
        for(int j=1;j<=m;j++)
            f[i][j]=max(f[i-1][j],f[p-1][j-1]+i-p+1);
    }
    cout<<f[n][m]<<endl;
    return 0;
}




