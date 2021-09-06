//
// Created by zhuzhen on 2021/6/2.
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

const int N=1e3+10,M=1e6+10;

int n,m;
int f[N];

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

int main()
{
    ios::sync_with_stdio(false);
    while (cin>>n>>m)
    {
        for(int i=1;i<=n;i++) f[i]=i;
        while (m--)
        {
            int x,y;
            cin>>x>>y;
            int fx= get(x),fy= get(y);
            if(fx!=fy) f[fx]=fy;
        }
        int res=0;
        for(int i=1;i<=n;i++)
            if(f[i]==i) res++;
        cout<<res-1<<endl;
    }
    return 0;
}


