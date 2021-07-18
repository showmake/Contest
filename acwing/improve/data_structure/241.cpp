//
// Created by zhuzhen on 2021/5/19.
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

const int N=2*1e5+10;

int n;
int up[N],down[N],a[N],t[N];

void add(int x,int y)
{
    for(;x<=n;x+=x&-x) t[x]+=y;
}

ll ask(int x)
{
    ll res=0;
    for(;x;x-=x&-x) res+=t[x];
    return res;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        down[i]= ask(a[i]-1);
        up[i]= ask(n)- ask(a[i]);
        add(a[i],1);
    }
    memset(t,0,sizeof t);
    ll x=0,y=0;
    for(int i=n-1;~i;i--)
    {
        x+=up[i]* (ask(n)- ask(a[i]));
        y+=down[i]* ask(a[i]-1);
        add(a[i],1);
    }
    cout<<x<<' '<<y<<endl;
    return 0;
}



