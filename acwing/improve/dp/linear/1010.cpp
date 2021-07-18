//
// Created by zhuzhen on 2021/5/30.
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

int n;
int a[N],h[N];
int idx[N];

int main() {
    int x;
    int ans=0;
    while (cin>>x)
    {
        a[n++]=x;
        if(!ans||h[ans-1]<x) h[ans++]=x;
        else
        {
            int l=0,r=ans-1;
            while (l<r)
            {
                int mid=l+r>>1;
                if(h[mid]>=x) r=mid;
                else l=mid+1;
            }
            h[l]=x;
        }
    }
    int len=0;
    idx[0]=1e9;
    for(int i=0;i<n;i++)
    {
        int l=0,r=len;
        while (l<r)
        {
            int mid=l+r+1>>1;
            if(idx[mid]>=a[i]) l=mid;
            else r=mid-1;
        }
        idx[l+1]=a[i];
        //cout<<l+1<<endl;
        len=max(len,l+1);
    }
    cout<<len<<endl;
    cout<<ans<<endl;
    return 0;
}




