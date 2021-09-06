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

ll qmi(int a,int b,int p)
{
    ll res=1%p;
    while(b)
    {
        if(b&1) res=res*a%p;
        b>>=1;
        a=1ll*a*a%p;
    }
    return res;
}

int main()
{
    cin>>n;
    while (n--)
    {
        int a,p;
        cin>>a>>p;
        if(a%p==0) puts("impossible");
        else cout<<qmi(a,p-2,p)<<endl;
    }
    return 0;
}


