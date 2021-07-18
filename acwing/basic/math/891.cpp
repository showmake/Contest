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

int n;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    int x;
    cin>>x;
    for(int i=0;i<n-1;i++)
    {
        int y;
        cin>>y;
        x^=y;
    }
    if(x) puts("Yes");
    else puts("No");
    return 0;
}




