#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=51,M=1001,S=21;

int n,T;
char str[M];
int tr[S*N][4],ne[N*S],idx;
bool st[N*S];
int f[M][N*S];
int q[N*S];

inline int get(char c)
{
    if(c=='A') return 0;
    else if(c=='G') return 1;
    else if(c=='C') return 2;
    else return 3;
}

void insert()
{
    int p=0;
    for(int i=0;str[i];i++)
    {
        int c=get(str[i]);
        if(!tr[p][c]) tr[p][c]=++idx;
        p=tr[p][c];
    }
    st[p]=true;
}

void build()
{
    int hh=0,tt=-1;
    for(int i=0;i<4;i++)
        if(tr[0][i]) q[++tt]=tr[0][i];
    while (hh<=tt)
    {
        int cur=q[hh++];
        for(int i=0;i<4;i++)
        {
            int c=tr[cur][i];
            if(!c) tr[cur][i]=tr[ne[cur]][i];
            else
            {
                ne[c]=tr[ne[cur]][i];
                if(st[ne[c]]) st[c]=true;
                q[++tt]=c;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    while (cin>>n,n)
    {
        memset(tr,0,sizeof tr);
        memset(st,false,sizeof st);
        memset(ne,0,sizeof ne);
        memset(f,0x3f,sizeof f);
        idx=0;
        while (n--)
        {
            cin>>str;
            insert();
        }
        build();
        cin>>str+1;
        f[0][0]=0;
        int m= strlen(str+1);
        for(int i=0;i<m;i++)
            for(int j=0;j<=idx;j++)
                for(int k=0;k<4;k++)
                {
                    int d= k!=get(str[i+1]);
                    int p=tr[j][k];
                    if(!st[p]) f[i+1][p]=min(f[i+1][p],f[i][j]+d);
                }
        int res=0x3f3f3f3f;
        for(int i=0;i<=idx;i++) res=min(res,f[m][i]);
        if(res==0x3f3f3f3f) res=-1;
        cout<<"Case "<<++T<<": "<<res<<endl;
    }
    return 0;
}



