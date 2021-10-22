#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=110;

int n,T;
char str[N];
unordered_map<char,char> h;

int main()
{
    ios::sync_with_stdio(false);
    h['L']='R',h['R']='L',h['U']='D',h['D']='U';
    cin>>T;
    while (T--)
    {
        cin>>n;
        cin>>str;
        string s=string(n,' ');
        for(int i=0;i<n;i++)
        {
            char c=str[i];
            if(i<n-1)
            {
                if(str[i+1]==h[c])
                {
                    s[i]='L';
                    s[i+1]='R';
                    i++;
                }
                else s[i]=h[c];
            }
            else s[i]=h[c];
        }
        cout<<s<<endl;
    }
    return 0;
}










