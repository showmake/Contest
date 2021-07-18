//
// Created by zhuzhen on 2021/5/22.
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

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e5+10;

vector<vector<int>> idx(N);
int n;
unordered_map<int,int > h,a;

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        a[x]++;
    }

    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        idx[x].emplace_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        h[x]++;
    }

    ll res=0;
    for(auto &p:a)
    {
        int c=p.first;
        if(idx[c].size())
        {
            for(auto p:idx[c])
            {
                if(h.count(p)) res+=h[p]*a[c];
            }
        }
    }
    cout<<res<<endl;
    return 0;
}

