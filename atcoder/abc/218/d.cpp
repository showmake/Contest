#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e5+10;

int n;
map<int,vector<ll>> h;
map<pair<ll,ll>,ll> H;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ll x,y;
        cin>>x>>y;
        h[x].push_back(y);
    }
    for(auto item:h)
    {
        vector<ll> t=item.second;
        for(int i=0;i<t.size();i++)
        {
            for(int j=i+1;j<t.size();j++)
            {
                int start=t[i];
                if(t[j]<t[i]) start=t[j];
                H[{start,abs(t[i]-t[j])}]++;
            }
        }
    }
    ll res=0;
    for(auto item:H)
    {
        res+=1ll*(item.second-1)*item.second/2;
    }
    cout<<res<<endl;
    return 0;
}



