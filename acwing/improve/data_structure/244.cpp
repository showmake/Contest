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

const int N=1e5+10;

int n;
int t[N],a[N],res[N];

int ask(int x)
{
    int res=0;
    for(;x;x-=x&-x) res+=t[x];
    return res;
}

void add(int x,int y)
{
    for(;x<=n;x+=x&-x) t[x]+=y;
}


int main()
{
    cin>>n;
    add(1,1);
    for(int i=2;i<=n;i++)
    {
        cin>>a[i];
        add(i,1);
    }
    for(int i=n;i;i--)
    {
        int l=1,r=n;
        int x=a[i]+1;
        while(l<r)
        {
            int mid=l+r>>1;
            if(ask(mid)>=x) r=mid;
            else l=mid+1;
        }
        res[i]=r;
        add(r,-1);
    }
    for(int i=1;i<=n;i++) cout<<res[i]<<endl;
    return 0;
}



