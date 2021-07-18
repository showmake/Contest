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
    string str;
    cin>>str;
    int res=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='A') res++;
        else res--;
    }
    if(res>0) cout<<'A'<<endl;
    else if(res<0) cout<<'B'<<endl;
    else cout<<'T'<<endl;
    return 0;
}

