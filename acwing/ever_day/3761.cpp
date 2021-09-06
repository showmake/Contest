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

const int N=2*1e5+10;

int a[N];
int n;

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    unordered_map<int,int> h;
    while(T--)
    {
        h.clear();
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            h[a[i]]=i;
        }
        sort(a+1,a+n+1);
        int p=1,q=1;
        int res=-1;
        while (q<=n)
        {
            while (q<=n&&a[p]==a[q]) q++;
            if(q-p<=1)
            {
                res=h[a[p]];
                break;
            }
            p=q;
        }
        cout<<res<<endl;
    }
    return 0;
}









