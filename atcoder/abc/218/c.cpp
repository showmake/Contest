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

const int N=200+10;

int n,m;
char s[N][N],t[N][N],g[N][N];
bool flag=false;
pii idx[N*N];

void check(int op)
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            g[i][j]=s[j][i];

    if(op)
    {
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n/2;j++)
                swap(g[i][j],g[i][n-j+1]);
    }
    else
    {
        for(int j=1;j<=n;j++)
            for(int i=1;i<=n/2;i++)
                swap(g[i][j],g[n-i+1][j]);
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
            cout<<g[i][j];
        cout<<endl;
    }
    cout<<endl;

    int dx=-1,dy=-1;
    int cnt=0;
    for(int i=1;i<=n;i++)
        for(int j=0;j<=n;j++)
        {
            if(g[i][j]=='#')
            {
                //cout<<dx<<' '<<dy<<endl;
                //cout<<i<<' '<<j<<endl;
                //cout<<idx[cnt].first<<' '<<idx[cnt].second<<endl;
                if(!cnt) dx=i-idx[cnt].first,dy=j-idx[cnt].second;
                else
                {
                    if(dx!=i-idx[cnt].first||dy!=j-idx[cnt].second) return ;
                }
                cnt++;
            }
        }
    flag= true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>s[i]+1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            cin>>t[i][j];
            if(t[i][j]=='#') idx[m++]={i,j};
        }
    for(int i=0;i<2;i++) check(i);
    if(flag) cout<<"Yes";
    else cout<<"No"<<endl;
    return 0;
}



