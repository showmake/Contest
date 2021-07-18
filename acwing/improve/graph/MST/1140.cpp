//
// Created by zhuzhen on 2021/5/22.
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

const int N=110;

int n;
int g[N][N],d[N];
bool st[N];

int prim()
{
    memset(st,false,sizeof st);
    memset(d,0x3f,sizeof d);
    int res=0;
    d[1]=0;
    for(int i=0;i<n;i++)
    {
        int t=-1;
        for(int j=1;j<=n;j++)
            if(!st[j]&&(t==-1||d[t]>d[j])) t=j;
        st[t]=true;
        res+=d[t];
        for(int j=1;j<=n;j++)
            if(!st[j]) d[j]=min(g[t][j],d[j]);
    }
    return res;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>g[i][j];
    cout<<prim()<<endl;
    return 0;
}
