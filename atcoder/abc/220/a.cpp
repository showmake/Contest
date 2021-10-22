#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=1e5+10;

int a,b,c;

int main()
{
    ios::sync_with_stdio(false);
    cin>>a>>b>>c;
    int x=a/c,y=b/c;
    if(x==y)
    {
        if(a%c==0) cout<<a<<endl;
        else cout<<-1<<endl;
    }
    else
    {
        cout<<y*c<<endl;
    }
    return 0;
}



