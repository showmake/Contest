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

const int N=1e5+10;

int n,m;

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while (T--)
    {
        cin>>n>>m;
        ll x,maxn=0;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            if(m==x) flag= true;
            maxn=max(x,maxn);
        }
        if(flag)
        {
            cout<<1<<endl;
            continue;
        }
        ll res=max(1ll,m/maxn) ;
        if(m%maxn) res++;
        cout<<res<<endl;
    }
    return 0;
}









