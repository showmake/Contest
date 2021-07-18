//
// Created by zhuzhen on 2021/5/19.
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

const int N=1e5+10;

int n,m;
int last=0;
int t[N];

void add(int x,int y)
{
    for(;x<=n;x+=x&-x) t[x]+=y;
}

ll ask(int x)
{
    ll res=0;
    for(;x;x-=x&-x) res+=t[x];
    return res;
}

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        add(i,x-last);
        last=x;
    }
    while(m--)
    {
        char c;
        cin>>c;
        if(c=='Q')
        {
            int x;
            cin>>x;
            cout<<ask(x)<<endl;
        }
        else if(c=='C')
        {
            int l,r,d;
            cin>>l>>r>>d;
            add(l,d);
            add(r+1,-d);
        }
    }
    return 0;
}



