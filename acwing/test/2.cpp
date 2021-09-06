#pragma GCC optimize(2)
#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e6+10;

int n;
pii a[N],b[N];
pii c[N];
bool st[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        a[i]={x,i};
        b[i]={y,i};
        c[i]={abs(x-y),i};
    }
    sort(c,c+n);
    reverse(c,c+n);
    ll res=0;
    int p=n/2,q=n/2;
    for(int i=0;i<n;i++)
    {
        int id=c[i].second;
        if(a[id].first>b[id].first)
        {
            if(p)
            {
                p--;
                res+=a[id].first;
                st[id]=true;
            }
            else break;
        }
        else if(a[id].first<=b[id].first)
        {
            if(q)
            {
                q--;
                res+=b[id].first;
                st[id]=true;
            }
            else break;
        }
    }
    if(p)
    {
        sort(a,a+n);
        reverse(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(st[a[i].second]) continue;
            res+=a[i].first;
        }
    }
    else if(q)
    {
        sort(b,b+n);
        reverse(b,b+n);
        for(int i=0;i<n;i++)
        {
            if(st[b[i].second]) continue;
            res+=b[i].first;
        }
    }
    cout<<res<<endl;
    return 0;
}














