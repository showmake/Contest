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

int n,m;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    int res=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        if(x<m) res++;
    }
    cout<<res<<endl;
    return 0;
}



