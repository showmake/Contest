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

const int N=110;

int n,T;
int h[N];

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n;
        for(int i=0;i<n;i++) cin>>h[i];
        int res=0;
        int p=1;
        while(p<n)
        {
            while(p<n-1&&h[p]<=h[p-1]) p++;
            if(p==n-1) break;
            if(h[p]>h[p+1]) res++;
            p++;
        }
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}

