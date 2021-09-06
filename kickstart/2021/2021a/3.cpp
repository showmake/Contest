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

const int N=310;

const int dx[4]={-1,1,0,0},dy[4]={0,0,1,-1};

struct Node
{
    int x,y,val;
    Node(){}
    Node(int x,int y,int val):x(x),y(y),val(val){}
    bool operator < (const Node &rms) const { return val < rms.val;}
};


int n,T,m;
priority_queue<Node> heap;
bool st[N][N];
int g[N][N];

ll bfs()
{
    memset(st,false,sizeof st);
    ll res=0;
    while (heap.size())
    {
        Node cur=heap.top();heap.pop();
        int x=cur.x,y=cur.y;
        //cout<<x<<' '<<y<<endl;
        if(st[x][y]) continue;
        st[x][y]=true;
        for(int i=0;i<4;i++)
        {
            int newx=x+dx[i],newy=y+dy[i];
            if(newx<0||newx>=n||newy<0||newy>=m||st[newx][newy]) continue;
            int d=g[x][y]-g[newx][newy];
            if(d>1)
            {
                res+=d-1;
                g[newx][newy]=g[x][y]-1;
                heap.push(Node(newx,newy,g[newx][newy]));
            }
        }
    }
    return res;
}

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        cin>>n>>m;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
            {
                cin>>g[i][j];
                heap.push(Node(i,j,g[i][j]));
            }
        cout<<"Case #"<<t<<": "<<bfs()<<endl;
    }
    return 0;
}

