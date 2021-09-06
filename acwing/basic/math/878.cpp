//
// Created by zhuzhen on 2021/5/14.
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

const int N=1e6+10;

int n;

int exgcd(int a,int b,int &x,int &y)
{
    if(!b)
    {
        x=1,y=0;
        return a;
    }
    ll d=exgcd(b,a%b,y,x);
    y-=a/b*x;
    return d;
}

int main()
{
    cin>>n;
    while(n--)
    {
        int a,b,m,x,y;
        cin>>a>>b>>m;
        int d= exgcd(a,m,x,y);
        if(b%d) puts("impossible");
        else cout<<1ll*x*(b/d)%m<<endl;
    }
    return 0;
}


