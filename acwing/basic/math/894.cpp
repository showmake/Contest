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

const int N=110;

int n;
int f[N];

int sg(int x)
{
    if(f[x]!=-1) return f[x];
    unordered_set<int> h;
    for(int i=0;i<x;i++)
        for(int j=i;j<x;j++)
            h.insert(sg(i)^sg(j));
    for(int i=0;;i++)
        if(!h.count(i))
            return f[x]=i;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    int res=0;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        memset(f,-1,sizeof f);
        f[0]=0;
        res^=sg(x);
    }
    if(res) puts("Yes");
    else puts("No");
    return 0;
}





