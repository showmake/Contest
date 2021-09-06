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

const int N=20;

int n,T;
int a[N];
int res;

bool check(int l,int r)
{
    if(l==r) return true;
    bool flag=true;
    for(int i=l;i<r;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=false;
            break;
        }
    }
    return flag;
}

void dfs(int l,int r)
{
    if(check(l,r))
    {
        res=max(res,r-l+1);
        return;
    }
    int mid=l+r>>1;
    dfs(l,mid);
    dfs(mid+1,r);
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        res=0;
        dfs(1,n);
        cout<<res<<endl;
    }
    return 0;
}








