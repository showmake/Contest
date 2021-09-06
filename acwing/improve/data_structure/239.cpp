//
// Created by zhuzhen on 2021/5/20.
//
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

const int N=1e4+10;

unordered_map<int,int> h;
int n,m;
int f[N<<1],d[N];

int get(int x)
{
    if(x==f[x]) return f[x];
    int t=get(f[x]);
    d[x]^=d[f[x]];
    f[x]=t;
    return f[x];
}

int main()
{
    cin>>n>>m;
    int cnt=0;
    for(int i=0;i<=m;i++) f[i]=i;
    for(int i=0;i<m;i++)
    {
        int x,y;
        string s;
        cin>>x>>y>>s;
        if(!h.count(x-1)) h[x-1]=cnt++;
        if(!h.count(y)) h[y]=cnt++;
        x=h[x-1],y=h[y];
        int ans=s=="even"?0:1;
        int fx=get(x),fy=get(y);
        if(fx==fy)
        {
            //cout<<"YES"<<x<<' '<<y<<endl;
            if((d[x]^d[y])!=ans)
            {
                cout<<i<<endl;
                return 0;
            }
        }
        else
        {
            //cout<<"NO"<<x<<' '<<y<<endl;
            f[fx]=fy;
            d[fx]=d[x]^d[y]^ans;
        }
    }
    cout<<m<<endl;
    return 0;
}




