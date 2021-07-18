//
// Created by zhuzhen on 2021/5/27.
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

const int N=2*1e5+10;

int n;
int x,y,res,ans;
int a;

int main()
{
    cin>>n;
    while(n--)
    {
        cin>>a;
        if(a>0)
        {
            res+=1+x;
            ans+=y;
            x=1+x;
            y=y;
        }
        else
        {
            res+=y;
            ans+=1+x;
            int t=x;
            x=y;
            y=1+t;
        }
    }
    cout<<ans<<' '<<res<<endl;
    return 0;
}




