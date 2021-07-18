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

const int N=3*1e6+10,M=1e5+10;

int trie[N][2],idx;
int cnt[N],a[M];
int n,m;
ll res=0;

void insert(int x,int v)
{
    int p=0;
    for(int i=30;~i;i--)
    {
        int u=x>>i&1;
        if(!trie[p][u]) trie[p][u]=++idx;
        p=trie[p][u];
        cnt[p]+=v;
    }
}

ll search(int x)
{
    int p=0;
    ll res=0;
    for(int i=30;~i;i--)
    {
        int u=x>>i&1;
        if(cnt[trie[p][!u]])
        {
            res+=1<<i;
            p=trie[p][!u];
        }
        else p=trie[p][u];
    }
    return res;
}


int main()
{
    cin>>n>>m;
    insert(0,1);
    for(int i=1;i<=n;i++) {
        cin >> a[i];
        a[i]^= a[i - 1];
        insert(a[i],1);
        res=max(res, search(a[i]));
        if(i>=m) insert(a[i-m],-1);
    }
    cout<<res<<endl;
    return 0;
}

