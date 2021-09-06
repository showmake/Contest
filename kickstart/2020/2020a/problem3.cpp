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

int n,m,T;
int d[N];

bool check(int x)
{
    int op=m;
    for(int i=0;i<n;i++)
    {
        if(d[i]<=x) return true;
        int cut=d[i]/x;
        if(d[i]%x==0) cut--;
        if(op-cut<0) return false;
        op-=cut;
    }
    return true;
}

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;
        n--;
        int x;
        cin>>x;
        for(int i=0;i<n;i++)
        {
            int y;
            cin>>y;
            d[i]=y-x;
            x=y;
        }
        sort(d,d+n);
        reverse(d,d+n);
        int l=1,r=d[0];
        while(l<r)
        {
            int mid=l+r>>1;
            if(check(mid)) r=mid;
            else l=mid+1;
        }
        cout<<"Case #"<<t<<": "<<l<<endl;
    }
    return 0;
}

