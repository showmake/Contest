/*
 * 每个数只会被自己的最小质因子筛出
 * */
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
bool st[N];
int prime[N],cnt;

void get_prime(int n)
{
    for(int i=2;i<=n;i++)
    {
        if(!st[i]) prime[cnt++]=i;
        for(int j=0;prime[j]<=n/i;j++)
        {
            st[i*prime[j]]=true;
            if(i%prime[j]==0) break;;
        }
    }
}


int main()
{
    cin>>n;
    get_prime(n);
    cout<<cnt<<endl;
    return 0;
}


