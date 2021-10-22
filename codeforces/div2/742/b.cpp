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

const int N=1e5+10;

int a,b,T;

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>a>>b;
        int x=0;
        if((a-1)%4==0) x=a-1;
        else if((a-1)%4==1) x=1;
        else if((a-1)%4==2) x=a;
        else x=0;
        if(x==b)
        {
            cout<<a<<endl;
            continue;
        }
        x^=b;
        if(x==a) cout<<a+2<<endl;
        else cout<<a+1<<endl;
    }
    return 0;
}








