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

void exgcd(int a,int b,int &x,int &y)
{
    if(!b)
    {
        x=1,y=0;
        return ;
    }
    exgcd(b,a%b,y,x);
    y-=a/b*x;
    return ;
}

int main()
{
    cin>>n;
    while(n--)
    {
        int a,b,x,y;
        cin>>a>>b;
        exgcd(a,b,x,y);
        cout<<x<<' '<<y<<endl;
    }
    return 0;
}

