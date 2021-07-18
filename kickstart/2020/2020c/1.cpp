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

const int N=2*1e5+10;

int n,T,m;
int a[N];

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++) cin>>a[i];
        ll res=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==m)
            {
                int p=i,q=m;
                while(p<n&&a[p]==q) p++,q--;
                if(q==0) res++;
                i=p-1;
                //cout<<p<<endl;
            }
        }
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}



