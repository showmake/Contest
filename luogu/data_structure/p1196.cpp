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

const int N=3e4+10;

int n,m;
int f[N],cnt[N],d[N];

int get(int x)
{
    if(x==f[x]) return f[x];
    int t=get(f[x]);
    d[x]+=d[f[x]];
    f[x]=t;
    return f[x];
}

void merge(int x,int y)
{
    int fx=get(x),fy=get(y);
    if(fx!=fy)
    {
        d[fx]=cnt[fy];
        cnt[fy]+=cnt[fx];
        f[fx]=fy;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>m;
    for(int i=1;i<N;i++)
    {
        f[i]=i;
        cnt[i]=1;
    }
    while (m--)
    {
        char op;
        int x,y;
        cin>>op>>x>>y;
        if(op=='M') merge(x,y);
        else
        {
            int fx=get(x),fy= get(y);
            if(x==y) cout<<0<<endl;
            else if(fx!=fy) cout<<-1<<endl;
            else cout<<abs(d[x]-d[y])-1<<endl;
        }
    }
    return 0;
}



