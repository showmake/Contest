#pragma GCC optimize(2)
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

int a,b,T,res;
int f[330][110];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>a>>b;
        res=1e8;
        int n=abs(a-b);
        memset(f,0x3f,sizeof f);
        f[n][1]=0;
        for(int j=1;j<110;j++)
        {
            for(int i=0;i<=3*n;i++)
            {
                if(i>=j-1) f[i][j]=min(f[i][j],f[i-(j-1)][j-1]+1);
                f[i][j]=min(f[i][j],f[i+j-1][j-1]+1);
                if(i==0) res=min(res,f[i][j]);
            }
        }
        cout<<res<<endl;
    }
    return 0;
}












