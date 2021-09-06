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

const int N=110,M=1e4+10;

int n,m;
int s[N],f[M];

int sg(int x)
{
    if(f[x]!=-1) return f[x];
    unordered_set<int> h;
    for(int i=0;i<m;i++)
        if(x>=s[i]) h.insert(sg(x-s[i]));
    for(int i=0;;i++)
        if(!h.count(i))
            return f[x]=i;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>m;
    for(int i=0;i<m;i++) cin>>s[i];
    cin>>n;
    int res=0;
    memset(f,-1,sizeof  f);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        res^=sg(x);
    }
    if(res) puts("Yes");
    else puts("No");
    return 0;
}




