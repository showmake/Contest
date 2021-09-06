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

const int N=8;

int n,m;
char g[N][N];
ll res=0;
const int dx[]={-1,1,0,0},dy[]={0,0,1,-1};
bool st[N][N];

bool check()
{
    int start_x=-1,start_y=-1;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            if(g[i][j]=='@')
            {
                start_x=i,start_y=j;
                break;
            }
    memset(st,false,sizeof st);
    queue<pii> q;
    if(start_x!=-1)
    {
        q.push({start_x,start_y});
        st[start_x][start_y]= true;
    }
    int cnt=0;
    while (q.size())
    {
        pii cur=q.front();q.pop();
        cnt++;
        int x=cur.first,y=cur.second;
        for(int i=0;i<4;i++)
        {
            int a=x+dx[i],b=y+dy[i];
            if(a<0||a>=n||b<0||b>=n||st[a][b]||g[a][b]!='@') continue;
            st[a][b]= true;
            q.push({a,b});
        }
    }
    return cnt==m;
}

void print()
{
    for(int i=0;i<n;i++) cout<<g[i]<<endl;
    cout<<endl;
}

void dfs(int u,int cnt)
{
    if(!cnt)
    {
        res+=check();
        //cout<<res<<endl;
        //print();
        return ;
    }
    if(u==n*n) return;
    int x=u/n,y=u%n;
    if(g[x][y]=='.')
    {
        g[x][y]='@';
        dfs(u+1,cnt-1);
        g[x][y]='.';
    }
    dfs(u+1,cnt);
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=0;i<n;i++)
        cin>>g[i];
    dfs(0,m);
    cout<<res<<endl;
    return 0;
}



