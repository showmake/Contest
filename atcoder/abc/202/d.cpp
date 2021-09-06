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

const int N=62;

int n,m;
ll k;

ll c[N];
string a[31],b[31];

int main()
{
    ios::sync_with_stdio(false);
    a[0]=1;
    for(int i=1;i<62;i++) c[i]=c[i-1]*i;
    cin>>n>>m>>k;
    string res="";
    while(k)
    {
        if(k>=c[n+m-1])
        {
            res+='b';
            k-=c[n+m-1];
        }
    }
    cout<<res<<endl;
    return 0;
}

