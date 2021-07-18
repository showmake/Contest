//
// Created by zhuzhen on 2021/5/11.
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
int x,y;

int gcd(int x,int y)
{
    return y?gcd(y,x%y):x;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        cout<<gcd(x,y)<<endl;
    }
    return 0;
}



