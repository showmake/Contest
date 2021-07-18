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

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    double res=(-1+ sqrt(1+8*n))/2;
    if(res==(ll)res) cout<<res;
    else cout<<(ll)res+1<<endl;
    return 0;
}



