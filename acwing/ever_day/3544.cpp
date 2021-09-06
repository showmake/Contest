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

int n,T;

int main()
{
    cin>>T;
    while (T--)
    {
        string s;
        cin>>s;
        int n=s.size();
        if(n<=5) cout<<s<<endl;
        else
        {
            for(int i=0;i+5<s.size();i++)
            {
                string t=s.substr(i,5);
                if(t=="11111")
                {
                    s.erase(i+5,1) ;
                    i=i+4;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}




