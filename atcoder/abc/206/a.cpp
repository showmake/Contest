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
    int res=n*1.08;
    if(res==206) puts("so-so");
    else if(res<206) puts("Yay!");
    else puts(":(");
    return 0;
}



