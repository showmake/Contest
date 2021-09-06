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

ll n,T,res;
ll f[120];

int main()
{
    ios::sync_with_stdio(false);
    f[0]=0;
    for(int i=1;i<120;i++) f[i]=1000;
    for(int v=1;v<120;v++)
        for(int i=0;i<=20;i++)
            for(int j=0;j<=15;j++)
                for(int k=0;k<=12;k++)
                {
                    if(i*6+j*8+k*10>=v) f[v]=min(f[v],1ll*i*15+j*20+k*25);
                }
    cin>>T;
    while (T--)
    {
        cin>>n;
        res=(n/120)*300;
        n%=120;
        cout<<(res+f[n])<<endl;
    }
    return 0;
}