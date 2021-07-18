//
// Created by zhuzhen on 2021/5/10.
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

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e6+10;

int n;
int st[N];

int main()
{
    memset(st,0,sizeof st);
    cin>>n;
    int res=0;
    for(int i=2;i<=n;i++)
    {
        if(!st[i])
        {
            res++;
            for(int j=i;j<=n/i;j++) st[j*i]=1;
        }
    }
    cout<<res<<endl;
    return 0;
}


