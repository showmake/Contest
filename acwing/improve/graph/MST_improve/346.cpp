#pragma GCC optimize(2)
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

const int N=6100;

int n,m;
int f[N],s[N];

struct Edge
{
    int x,y,w;
    bool operator < (const Edge& rms) const {return w<rms.w;}
}e[N];

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}


int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while (T--)
    {
        cin>>n;
        for(int i=1;i<n;i++) cin>>e[i].x>>e[i].y>>e[i].w;
        sort(e+1,e+n);
        for(int i=1;i<=n;i++) f[i]=i,s[i]=1;
        int res=0;
        for(int i=1;i<n;i++)
        {
            int fx=get(e[i].x),fy=get(e[i].y);
            if(fx==fy) continue;
            res+=(s[fx]*s[fy]-1)*(e[i].w+1);
            s[fy]+=s[fx];
            f[fx]=fy;
        }
        cout<<res<<endl;
    }
    return 0;
}








