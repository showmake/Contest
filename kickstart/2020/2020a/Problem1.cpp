//
// Created by zhuzhen on 2021/5/17.
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

int n,T,m;
int w[N],f[N];

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;
        for(int i=1;i<=n;i++) cin>>w[i];
        sort(w+1,w+n+1);
        for(int i=1;i<=n;i++) w[i]+=w[i-1];
        int l=0,r=n;
        while(l<r)
        {
            int mid=l+r+1>>1;
            if(w[mid]<=m) l=mid;
            else r=mid-1;
        }
        cout<<"Case #"<<t<<": "<<l<<endl;
    }
    return 0;
}


