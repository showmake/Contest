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

const int M=1e3+10;

int n;
int v[5]={0,10,20,50,100};
int f[M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    f[0]=1;
    for(int i=1;i<=4;i++)
        for(int j=v[i];j<=n;j++)
            f[j]+=f[j-v[i]];
    cout<<f[n]<<endl;
    return 0;
}




