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
int a[N],cnt;

void get(int x)
{
    cnt=0;
    for(int i=1;i<=x/i;i++)
    {
        if(x%i==0)
        {
            a[cnt++]=i;
            if(x/i!=i) a[cnt++]=x/i;
        }
    }
    sort(a,a+cnt);
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        get(x);
        for(int i=0;i<cnt;i++) cout<<a[i]<<' ';
        cout<<endl;
    }
    return 0;
}


