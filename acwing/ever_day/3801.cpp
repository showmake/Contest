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

const int N=1e5+10;

int n,T;
int a[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        int maxn=*max_element(a,a+n);
        int p=0,q=0,res=0;
        while(q<n)
        {
            while(p<n&&a[p]!=maxn) p++;
            q=p;
            while(q<n&&a[q]==maxn) q++;
            res=max(q-p,res);
            p=q;
        }
        cout<<res<<endl;
    }
    return 0;
}









