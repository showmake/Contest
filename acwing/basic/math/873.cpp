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

const int N=1e6+10;

int n,x;
int prime[N],cnt=0;

void work(int x)
 {
    cnt=0;
    for(int i=2;i<=x/i;i++)
    {
        if(x%i==0)
        {
            prime[cnt++]=i;
            while(x%i==0) x/=i;
        }
    }
    if(x>1) prime[cnt++]=x;
}


int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        work(x);
        int res=x;
        for(int i=0;i<cnt;i++) res=res/prime[i]*(prime[i]-1);
        cout<<res<<endl;
    }
    return 0;
}


