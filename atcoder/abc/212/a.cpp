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
    int a,b;
    cin>>a>>b;
    if(a>0&&b==0) puts("Gold");
    else if(a==0&&b>0) puts("Silver");
    else if(a>0&&b>0) puts("Alloy");
    return 0;
}



