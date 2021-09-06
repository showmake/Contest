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

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    ll sq_sumx=0,sq_sumy=0;
    ll sum_x=0,sum_y=0;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        sum_x+=x,sum_y+=y;
        sq_sumx+=x*x,sq_sumy+=y*y;
    }
    ll a=sum_x*sum_x-sq_sumx;
    ll b=sum_y*sum_y-sq_sumy;
    ll res=(n-1)*(sq_sumx+sq_sumy)-(a+b);
    cout<<res<<endl;
    return 0;
}









