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

int n,l,r,m;
int p[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>l>>r;
    l=max(l,4);
    ll res=0;
    for(int i=l;i<r;i++)
    {
        int x=i;
        m=0;
        for(int j=2;j<=x/j;j++)
        {
            if(x%j==0)
            {
                p[m++]=j;
                while(x%j==0) x/=j;
            }
        }
        if(x>1) p[m++]=x;
        for(int j=1;j<1<<m;j++)
        {
            int cnt=0,mul=1;
            for(int k=0;k<m;k++)
            {
                if(j&(1<<k))
                {
                    cnt++;
                    mul*=p[m-1-k];
                }
            }
            if(cnt%2) res+=(r-i)/mul;
            else res-=(r-i)/mul;
        }
        res-=(r-i)/i;
    }
    res<<=1;
    cout<<res<<endl;
    return 0;
}

