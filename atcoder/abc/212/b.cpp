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
    int a[4];
    bool same= true;
    for(int i=0;i<4;i++)
    {
        a[3-i]=n%10;
        n/=10;
    }

    bool flag= true;
    for(int i=0;i<3;i++)
    {
        if((a[i]+1)%10!=a[i+1]) flag= false;
        if(a[i]!=a[i+1]) same= false;
    }

    if(same||flag) puts("Weak");
    else puts("Strong");
    return 0;
}



