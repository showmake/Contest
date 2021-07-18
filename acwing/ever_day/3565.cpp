//
// Created by zhuzhen on 2021/5/27.
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

const int N=110;

int n,m,T;
int a[N][N];

int main()
{
    cin>>T;
    while (T--)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                cin>>a[i][j];
        ll res=0;
        for(int i=0;i<(n+1)>>1;i++)
            for(int j=0;j<(m+1)>>1;j++)
            {
                int x=a[i][j],y=a[n-i-1][j];
                int p=a[i][m-1-j],q=a[n-i-1][m-j-1];
                vector<int> t={x};
                if(i!=n-i-1) t.emplace_back(y);
                if(j!=m-j-1) t.emplace_back(p);
                if(i!=n-i-1||j!=m-j-1) t.emplace_back(q);
                sort(t.begin(),t.end());
                if(t.size()>1)
                {
                    for(auto &c:t) res+=abs(c-t[1]);
                }
            }
        cout<<res<<endl;
    }
    return 0;
}




