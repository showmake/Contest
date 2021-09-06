//
// Created by zhuzhen on 2021/5/22.
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

int n,m,T;

int main()
{
    cin>>T;
    while (T--)
    {
        cin>>n>>m;
        int res=0;
        for(int i=1;i<=m/i;i++)
        {
            if(m%i==0)
            {
                int x=i,y=m/x;
                if(x<=n&&y<=n)
                {
                    if(x==y) res++;
                    else res+=2;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}




