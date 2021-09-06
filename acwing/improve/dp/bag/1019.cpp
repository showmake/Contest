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

const int N=510,M=6100;

int n,m;
int f[M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int v,w,c;
        cin>>v>>w>>c;
        if(v*c>=m)
        {
            for(int j=v;j<=m;j++) f[j]=max(f[j],f[j-v]+w);
        }
        else
        {
            for(int k=1;c;k<<=1)
            {
                int x=min(k,c);
                for(int j=m;j>=x*v;j--) f[j]=max(f[j],f[j-x*v]+x*w);
                c-=x;
            }
        }
    }
    cout<<f[m]<<endl;
    return 0;
}



