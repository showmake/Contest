//
// Created by zhuzhen on 2021/5/20.
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

const int N=1e5+10;

int n,m;

int f[N];

int get(int x)
{
    if(f[x]!=x) f[x]=get(f[x]);
    return f[x];
}


int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            f[i*n+j]=i*n+j;
    for(int i=1;i<=m;i++)
    {
        int x1,y1,x2,y2;
        cin>>x1>>y1;
        char c;
        cin>>c;
        if(c=='R') x2=x1,y2=y1+1;
        else x2=x1+1,y2=y1;
        int fx=get(x1*n+y1),fy=get(x2*n+y2);
        if(fx==fy)
        {
            cout<<i<<endl;
            return 0;
        }
        else f[fx]=fy;
    }
    puts("draw");
    return 0;
}




