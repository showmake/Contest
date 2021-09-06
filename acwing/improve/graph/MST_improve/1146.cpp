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

const int N=310;

int n;
int g[N][N],d[N];
bool st[N];

int prim()
{
    memset(d,0x3f,sizeof d);
    int res=0;
    d[0]=0;
    for(int i=0;i<=n;i++)
    {
        int t=-1;
        for(int j=0;j<=n;j++)
            if(!st[j]&&(t==-1||d[t]>d[j])) t=j;
        st[t]=true;
        res+=d[t];
        for(int j=0;j<=n;j++)
            if(!st[j]) d[j]=min(d[j],g[t][j]);
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        g[0][i]=g[i][0]=x;
    }
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>g[i][j];
    cout<<prim()<<endl;
    return 0;
}










