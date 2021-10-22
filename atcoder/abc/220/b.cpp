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

const int N=1e5+10;

ll n,m,p;

int main()
{
    ios::sync_with_stdio(false);
    cin>>p>>n>>m;
    ll x=0,y=0;
    string s= to_string(n),t= to_string(m);
    for(int i=0;i<s.size();i++)
    {
        x=x*p+(s[i]-'0');
    }
    for(int i=0;i<t.size();i++)
    {
        y=y*p+(t[i]-'0');
    }
    ll res=x*y;
    cout<<res<<endl;
    return 0;
}



