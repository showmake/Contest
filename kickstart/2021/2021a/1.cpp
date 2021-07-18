//
// Created by zhuzhen on 2021/5/21.
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

ll n,T,m;
char s[N];

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;
        cin>>s+1;
        ll sum=0;
        for(int i=1;i<=n/2;i++)
            if(s[i]!=s[n-i+1])
                sum++;
        cout<<"Case #"<<t<<": "<<abs(sum-m)<<endl;
    }
    return 0;
}


