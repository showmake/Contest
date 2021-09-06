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

ll a,b,c,d,e,f;

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while (T--)
    {
        cin>>a>>b>>c>>d>>e>>f;
        ll res=0;
        if(e>f)
        {
            res+=e*min(a,d);
            d-=min(a,d);
            res+=min(d,min(b,c))*f;
        }
        else
        {
            ll t=min(d,min(b,c));
            res+=t*f;
            d-=t;
            res+=min(a,d)*e;
        }
        cout<<res<<endl;
    }
    return 0;
}









