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

int n,m;
int f[M];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int v,w,s;
        cin>>v>>w>>s;
        if(s==-1)
        {
            for(int j=m;j>=v;j--) f[j]=max(f[j],f[j-v]+w);
        }
        else if(!s||s*v>=m)
        {
            for(int j=v;j<=m;j++) f[j]=max(f[j],f[j-v]+w);
        }
        else
        {
            for(int k=1;s;k<<=1)
            {
                int x=min(k,s);
                for(int j=m;j>=x*v;j--) f[j]=max(f[j],f[j-x*v]+x*w);
                s-=x;
            }
        }
    }
    cout<<f[m]<<endl;
    return 0;
}



