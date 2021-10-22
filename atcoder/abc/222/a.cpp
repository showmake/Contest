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
    cin>>n;
    string res="";
    if(n==0)
    {
        cout<<"0000"<<endl;
        return 0;
    }
    int cnt=0;
    int x=n;
    while(x)
    {
        cnt++;
        x/=10;
    }
    cnt=4-cnt;
    for(int i=0;i<cnt;i++) res+='0';
    res+= to_string(n);
    cout<<res<<endl;
    return 0;
}



