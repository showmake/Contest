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
#include <cmath>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e5+10;

int n;

int main()
{
    string  s,t;
    cin>>s>>n;
    while (n--)
    {
        string op;
        cin>>op;
        if(op=="CUT")
        {
            int l,r;
            cin>>l>>r;
            t=s.substr(l,r-l+1);
            s.erase(l,r-l+1);
        }
        else if(op=="COPY")
        {
            int l,r;
            cin>>l>>r;
            t=s.substr(l,r-l+1);
        }
        else
        {
            int x;
            cin>>x;
            string temp;
            temp=s.substr(0,x+1);
            temp+=t;
            temp+=s.substr(x+1,s.size()-x-1);
            s=temp;
        }
        cout<<s<<endl;
    }
    return 0;
}




