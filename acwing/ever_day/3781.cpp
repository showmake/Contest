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

int n,m;

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while (T--)
    {
        cin>>n>>m;
        int res=1,last=0;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            if(last+x<=m) last+=x;
            else
            {
                last=x;
                res++;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}








