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

const int N=1e5+10,mod=1e8-3;

int n;
int a[N],b[N],c[N],t[N];
unordered_map<int,int> h1,h2;
int f[N];

void add(int x,int y)
{
    for(;x<=n;x+=x&-x) f[x]+=y;
}

ll ask(int x)
{
    ll res=0;
    for(;x;x-=x&-x) res+=f[x];
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        h1[a[i]]=i;
    }
    for(int i=1;i<=n;i++) cin>>b[i];
    sort(a+1,a+n+1);
    memcpy(t,b,sizeof b);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++) h2[b[i]]=i;
    for(int i=1;i<=n;i++)
        c[i]=  h1[a[h2[t[i]]]];
    ll res=0;
    int len=0;
    for(int i=n;i;i--)
    {
        res=(res+ask(c[i]-1))%mod;
        add(c[i],1);
    }
    cout<<res<<endl;
    return 0;
}



