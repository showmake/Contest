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

int T;

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        int n,m,x1,x2,y1,y2,w,h;
        cin>>n>>m>>x1>>y1>>x2>>y2>>w>>h;
        double res=1e8;
        bool flag=false;

        if(h+y2-y1<=m)
        {
            flag= true;
            res=min(res,1.0*max(0,y2-(m-h)));
            res=min(res,1.0*max(0,h-y1));
        }
        if(w+x2-x1<=n)
        {
            flag= true;
            res=min(res,1.0*max(0,x2-(n-w)));
            res=min(res,1.0*max(0,w-x1));
        }

        if(flag) printf("%.9lf\n",res);
        else cout<<-1<<endl;
    }
    return 0;
}








