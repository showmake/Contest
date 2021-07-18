//
// Created by zhuzhen on 2021/5/18.
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
const int base=1e9;


inline ll mod(ll x) { return (x%base+base)%base ; }

struct Move
{
    ll n,w,e,s;
    Move(){}
    Move(ll n,ll w,ll e,ll s):n(n),s(s),e(e),w(w) { }
    void mul(int num)
    {
        n=mod(n*num);
        s=mod(s*num);
        w=mod(w*num);
        e=mod(e*num);
    }
};


int T;
string s;
stack<char> st1;
stack<Move> st2;

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>s;
        st1.push('(');
        for(int i=0;i<=s.size();i++)
        {
            char c;
            if(i<s.size()) c=s[i];
            else c=')';
            if(c==')')
            {
                Move x=Move(0,0,0,0);
                while(st1.top()!='(')
                {
                    char cur = st1.top();
                    st1.pop();
                    //cout<<cur<<' ';
                    if (cur == 'N') x.n=mod(x.n+1);
                    if (cur == 'S')
                    {
                        x.s=mod(x.s+1);
                        //cout<<x.s<<endl;
                    }
                    if (cur == 'W') x.w=mod(x.w+1);
                    if (cur == 'E') x.e=mod(x.e+1);
                    if (cur == 'X')
                    {
                        Move add=st2.top();st2.pop();
                        x.n=mod(x.n+add.n);
                        x.s=mod(x.s+add.s);
                        x.w=mod(x.w+add.w);
                        x.e=mod(x.e+add.e);
                    }
                    //cout<<x.n<<' '<<x.s<<' '<<x.w<<' '<<x.e<<endl;
                }
                st1.pop();
                if(i<s.size())
                {
                    int num=st1.top()-'0';
                    st1.pop();
                    x.mul(num);
                }
                st1.push('X');
                st2.push(x);
                //cout<<x.n<<' '<<x.s<<' '<<x.w<<' '<<x.e<<endl;
            }
            else st1.push(c);
        }
        int w=0,h=0;
        if(st2.size()==1)
        {
            Move x=st2.top();st2.pop();
            w=mod(w+x.s);
            w=mod(w-x.n);
            h=mod(h+x.e);
            h=mod(h-x.w);
        }
        cout<<"Case #"<<t<<": "<<h+1<<' '<<w+1<<endl;
    }
    return 0;
}


