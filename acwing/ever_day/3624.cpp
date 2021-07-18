#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>
#include <cmath>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e5+10;

int n,T;
unordered_map<int,int> h;

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        string  s;
        cin>>s;
        n=s.size();
        int p=0,q=0;
        int res=n+1;
        h.clear();
        while (q<n)
        {
            while (h.size()<3&&q<n)
            {
                h[s[q]-'0']++;
                q++;
            }
            while (p<q&&h.size()==3)
            {
                h[s[p]-'0']--;
                if(!h[s[p]-'0']) h.erase(s[p]-'0');
                p++;
            }
            res=min(res,q-p+1);
        }
        if(res==n+1) cout<<0<<endl;
        else cout<<res<<endl;
    }
    return 0;
}




