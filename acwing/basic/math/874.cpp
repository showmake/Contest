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

int n;
bool st[N];
int primes[N],cnt,phi[N];

ll get_eular(int n)
{
    phi[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(!st[i])
        {
            phi[i]=i-1;
            primes[cnt++]=i;
        }
        for(int j=0;primes[j]<=n/i;j++)
        {
            st[primes[j]*i]=true;
            if(i%primes[j]==0)
            {
                phi[i*primes[j]]=phi[i]*primes[j];
                break;
            }
            else phi[i*primes[j]]=phi[i]*(primes[j]-1);
        }
    }
    ll res=0;
    for(int i=1;i<=n;i++) res+=phi[i];
    return  res;
}

int main()
{
    cin>>n;
    cout<<get_eular(n);
    return 0;
}


