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

const int N=2*1e5+10;

int n,m,T;
int f[N],g[N];

int get(int x,int f[])
{
    if(x!=f[x]) f[x]=get(f[x],f);
    return f[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while(T--)
    {
        cin>>n>>m;
        bool flag=true;
        for(int i=1;i<=n;i++) f[i]=i,g[i]=i;
        for(int i=0;i<m;i++)
        {
            int t,x,y;
            cin>>t>>x>>y;
            if(t)
            {
                int fx=get(x,f),fy=get(y,f);
                if(fx==fy)
                {
                    flag=false;
                    break;
                }
                f[fx]=fy;
            }
            else
            {

            }
        }
        if(!flag) puts("NO");
        else
        {

        }
    }
    return 0;
}

