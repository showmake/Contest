//
// Created by zhuzhen on 2021/5/12.
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

int n,k;
ll sum=0;
int a[N];
int st[N];

int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>st[i];
    ll add=0;
    for(int i=1;i<=n;i++)
    {
        if(!st[i]&&i<=k) add+=a[i];
        if(st[i]) sum+=a[i];
    }
    int q=k+1;
    ll res=add+sum;
    while(q<n)
    {
        if(!st[q]) add+=a[q];
        if(!st[q-k]) add-=a[q-k];
        res=max(res,add+sum);
        q++;
    }
    cout<<res<<endl;
    return 0;
}


