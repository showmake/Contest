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

int n;
int a[N];
char str[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    cin>>str+1;
    bool flag=true;
    int last=1;
    unordered_set<ll> h;
    int i=1;
    while (i<=n)
    {
        while(i<=n&&str[i]=='0')
        {
            if(a[i]==i) i++;
            else
            {
                flag= false;
                break;
            }
        }
        if(!flag||i>n) break;
        last=i;
        while (i<=n&&str[i]=='1')
        {
            h.insert(a[i]);
            i++;
        }
        if(i<=n)
        {
            h.insert(a[i]);
            i++;
        }
        for(auto c:h)
            if(c<last||c>=i)
            {
                flag= false;
                break;
            }
        h.clear();
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}









