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

int n;

int main()
{
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    for(auto &c:s)
    {
        if(c=='9') c='6';
        else if(c=='6') c='9';
    }
    cout<<s<<endl;
    return 0;
}

