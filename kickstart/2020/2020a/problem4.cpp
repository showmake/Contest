//
// Created by zhuzhen on 2021/5/17.
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

const int N=1e5+10,M=4*1e5+10;

int n,m,T;
int trie[M][26],idx;
int cnt[M];
ll res;

void insert(string s)
{
    int p=0;
    for(int i=0;i<s.size();i++)
    {
        int u=s[i]-'A';
        if(!trie[p][u]) trie[p][u]=++idx;
        p=trie[p][u];
        cnt[p]++;
    }
    return ;
}

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        memset(trie,0,sizeof trie);
        memset(cnt,0,sizeof cnt);
        idx=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
        {
            string str;
            cin>>str;
            insert(str);
        }
        //for(int i=0;i<=idx;i++)  cout<<cnt[i]<<' ';
        //cout<<endl;
        res=0;
        for(int i=1;i<=idx;i++) res+=cnt[i]/m;
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}

