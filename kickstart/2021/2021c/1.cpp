//
// Created by zhuzhen on 2021/5/23.
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

const int N=1e5+10,mod=1e9+7;

int n,T,m;
string s;
ll a[N];


int main()
{
    ios::sync_with_stdio(false);
    cin>>T;

    for(int t=1;t<=T;t++)
    {
        cin>>n>>m>>s;
        a[0]=1;
        for(int i=1;i<=N;i++) a[i]=(a[i-1]*m)%mod;
        ll res=0;
        int end=((n+1)>>1)-1;
        for(int i=0;i<=end;i++)
        {
            int cnt=min(s[i]-'a',m);
            //cout<<cnt<<endl;
            res=(res+1ll*cnt*a[end-i])%mod;
        }
        string st=s;
        for(int i=n-1;i>end;i--) st[i]=s[n-i-1];
        if(st.compare(s)<0) res=(res+1)%mod;
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}


