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

const int N=5*1e4+10;

int n,m;
int f[3*N];//同类 食物 天敌

int get(int x)
{
    if(x!=f[x]) f[x]=get(f[x]);
    return f[x];
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=3*n;i++) f[i]=i;
    int res=0;
    while (m--)
    {
        int op,x,y;
        cin>>op>>x>>y;
        int x1=get(x),x2=get(x+n),x3=get(x+2*n);
        int y1=get(y),y2=get(y+n),y3=get(y+2*n);
        if(x>n||y>n||(op==2&&x==y)) res++;
        else if(op==1)
        {
            if(x1==y2||x1==y3) res++;
            else
            {
                f[x1]=y1;

                f[x2]=y2;
                f[x3]=y3;
            }
        }
        else
        {
            if(x1==y1||x1==y2) res++;
            else
            {
                f[x1]=y3;
                f[x2]=y1;
                f[x3]=y2;
            }
        }
    }
    cout<<res<<endl;
    return 0;
}



