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

int T;
int f[N],d[N],s[N];

int get(int x)
{
    if(x==f[x]) return f[x];
    int t=get(f[x]);
    d[x]+=d[f[x]];
    f[x]=t;
    return f[x];
}

void merge(int x,int y)
{
    int fx=get(x),fy=get(y);
    f[fx]=fy;
    d[fx]=s[fy];
    s[fy]+=s[fx];
}

int main()
{
    cin>>T;
    for(int i=1;i<=N;i++)
    {
        f[i]=i;
        s[i]=1;
    }
    while (T--)
    {
        char op;
        int x,y;
        cin>>op>>x>>y;
        if(op=='M')
            merge(x,y);
        else
        {
            int fx=get(x),fy=get(y);
            if(fx!=fy) cout<<-1<<endl;
            else
            {
                if(x==y) cout<<0<<endl;
                else cout<<abs(d[x]-d[y])-1<<endl;
            }
        }
    }
    return 0;
}




