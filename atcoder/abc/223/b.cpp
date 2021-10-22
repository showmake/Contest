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
    string str,res,ans;
    cin>>str;
    res=str;
    ans=str;
    string s=str+str;
    n=str.size();
    for(int i=0;i<n;i++)
    {
        string t=s.substr(i,n);
        if(t<res) res=t;
        if(ans<t) ans=t;
    }
    cout<<res<<endl;
    cout<<ans<<endl;
    return 0;
}



