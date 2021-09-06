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

ll n;

priority_queue<ll,vector<ll>,greater<ll>> heap;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    ll add=0;
    while (n--)
    {
        int op;
        ll x;
        cin>>op;
        if(op==1)
        {
            cin>>x;
            heap.push(x-add);
        }
        else if(op==2)
        {
            cin>>x;
            add+=x;
        }
        else if(op==3)
        {
            ll res=(heap.top()+add);
            cout<<res<<endl;
            heap.pop();
        }
    }
    return 0;
}



