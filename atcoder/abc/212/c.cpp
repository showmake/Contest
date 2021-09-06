#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=2*1e5+10;

int n,m;
vector<ll> a,b;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        int y;
        cin>>y;
        b.push_back(y);
    }
    sort(b.begin(),b.end());
    ll res=1e9+1;
    for(auto &c:a)
    {
        auto it= lower_bound(b.begin(),b.end(),c);
        if(it==b.end()) res=min(res,abs(c-b.back()));
        else if(it==b.begin()) res=min(res,abs(c-b[0]));
        else
        {
            int d=it-b.begin();
            res=min(res,min(abs(b[d]-c),abs(b[d-1]-c)));
        }
    }
    cout<<res<<endl;
    return 0;
}



