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
#include <cmath>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=101;

int n;
int prime[N],cnt[N];

int main()
{
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        int m=0;
        for(int i=2;i<=sqrt(x);i++)
        {
            if(x%i==0)
            {
                prime[m]=i,cnt[m]=0;
                while(x%i==0) x/=i,cnt[m]++;
                m++;
            }
        }
        if(x>1) prime[m]=x,cnt[m++]=1;
        for(int i=0;i<m;i++) cout<<prime[i]<<' '<<cnt[i]<<endl;
        cout<<endl;
    }
    return 0;
}


