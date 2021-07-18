//
// Created by zhuzhen on 2021/5/18.
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

const int N=1e5+10,M=3400;

int n,T;
int a[N];
int p[M];
unordered_map<int,int> h;

int main()
{
    cin>>T;
    for(int i=0;i<M;i++) p[i]=i*i;
    for(int t=1;t<=T;t++)
    {
        h.clear();
        h[0]=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            a[i]+=a[i-1];
        }
        ll res=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<M;j++)
            {
                int x=a[i]-p[j];
                if(h.count(x)) res+=h[x];
            }
            h[a[i]]++;
        }
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}


