#include <iostream>
#include <sstream>
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

const int N=510,M=5100;

int n,m;
int d[N],g[N][N];

void bfs()
{
    memset(d,0x3f,sizeof d);
    d[1]=0;
    queue<int> q;
    q.push(1);
    while (q.size())
    {
        int cur=q.front();
        q.pop();
        for(int i=1;i<=n;i++)
            if(g[cur][i]&&d[i]>d[cur]+1)
            {
                q.push(i);
                d[i]=d[cur]+1;
            }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>m>>n;
    //建图
    int a[N],cnt;
    string line;
    getline(cin,line);
    stringstream ssin(line);
    for(int i=0;i<m;i++)
    {
        int x;
        cnt=0;
        getline(cin,line);
        stringstream ssin(line);
        while (ssin>>x) a[cnt++]=x;
        for(int i=0;i+1<cnt;i++)
            for(int j=i+1;j<cnt;j++)
                g[a[i]][a[j]]=1;
    }
    bfs();
    if(d[n]==0x3f3f3f3f) puts("NO");
    else cout<<max(d[n]-1,0)<<endl;
    return 0;
}







