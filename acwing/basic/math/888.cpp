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

int n,T;
pii f[]={{0,0},{1,0},{0,1},{1,1}};

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        int u,d,l,r;
        cin>>n>>u>>r>>d>>l;
        bool flag=false;
        for(int i=0;i<4;i++)
        {
            if(!i&&u>=n-1) continue;
            if((i==1||i==2)&&(!u||u==n)) continue;
            if(i==3&&u<n) continue;
            for(int j=0;j<4;j++)
            {
                if(!j&&d>=n-1) continue;
                if((j==1||j==2)&&(!d||d==n)) continue;
                if(j==3&&d<n) continue;
                int x=l-f[i].first-f[j].first,y=r-f[i].second-f[j].second;
                if(x>=0&&y>=0&&x<=n-2&&y<=n-2)
                {
                    flag= true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag) puts("YES");
        else puts("NO");
    }
    return 0;
}




