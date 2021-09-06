//
// Created by zhuzhen on 2021/5/28.
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
int a[N];

int main()
{
    cin>>n;
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    ll res=0;
    for(int i=0;i<n;i+=2) res+=a[i+1]-a[i];
    cout<<res<<endl;
    return 0;
}




