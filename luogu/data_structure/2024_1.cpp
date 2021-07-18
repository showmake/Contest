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

const int N=5*1e4+10;

int n,m;
int f[N],d[N];

int get(int x)
{
    if(x==f[x]) return f[x];
    int t=get(f[x]);
    d[x]=(d[x]+d[f[x]])%3;
    f[x]=t;
    return f[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    int res=0;
    for(int i=1;i<=n;i++) f[i]=i;
    while (m--)
    {
        int c,x,y;
        cin>>c>>x>>y;
        if(x>n||y>n||c==2&&x==y) res++;
        else
        {
            int fx=get(x),fy=get(y);
            if(fx==fy)
            {
                if ((d[x] - d[y] + 3) % 3 != c - 1) res++;
            }
            else
            {
                f[fx]=fy;
                d[fx]=(d[y]-d[x]+3+c-1)%3;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}


