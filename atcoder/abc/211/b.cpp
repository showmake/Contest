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

int n;

int main()
{
    ios::sync_with_stdio(false);
    string a;
    unordered_set<string> h;
    for(int i=0;i<4;i++)
    {
        cin>>a;
        h.insert(a);
    }
    if(h.size()==4) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}



