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

const int N=51;

int n;
int a[N],up[N],down[N];//up是指系统接受数值只能越来越大
int len1,len2;
int res;

void dfs(int u)
{
    if(len1+len2>=res) return ;
    if(u==n+1)
    {
        res=len1+len2;
        return ;
    }
    int t;
    //up
    int l=0,r=len1;
    while (l<r)
    {
        int mid=l+r>>1;
        if(up[mid]<=a[u]) r=mid;
        else l=mid+1;
    }
    if(l==len1)
    {
        up[len1++]=a[u];
        dfs(u+1);
        up[--len1]=0;
    }
    else
    {
        t=up[l];
        up[l]=a[u];
        dfs(u+1);
        up[l]=t;
    }
    //down
    l=0,r=len2;
    while (l<r)
    {
        int mid=l+r>>1;
        if(down[mid]>=a[u]) r=mid;
        else l=mid+1;
    }
    if(l==len2)
    {
        down[l]=a[u];
        down[++len2]=1e9;
        dfs(u+1);
        down[len2--]=0;
        down[len2]=1e9;
    }
    else
    {
        t=down[l];
        down[l]=a[u];
        dfs(u+1);
        down[l]=t;
    }
}

int main()
{
    while (cin>>n,n)
    {
        for(int i=1;i<=n;i++) cin>>a[i];
        len1=len2=0;
        res=n;
        down[len2]=1e9;
        dfs(1);
        cout<<res<<endl;
    }
    return 0;
}




