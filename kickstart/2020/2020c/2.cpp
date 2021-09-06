//
// Created by zhuzhen on 2021/5/18.
//
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

const int N=26,M=N*N;

int n,m,T;
vector<string> g(30);
int h[N],e[M],ne[M],idx=0;
bool st[N];
int indeg[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        memset(st,false,sizeof st);
        memset(indeg,0,sizeof indeg);
        memset(h,-1,sizeof h);
        idx=0;
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>g[i];
        for(int i=0;i<n;i++) {
            for (int j = 0; j < m; j++) {
                if (i<n-1&&g[i][j] != g[i + 1][j]) {
                    add(g[i+1][j] - 'A', g[i][j] - 'A');
                    indeg[g[i][j] - 'A']++;
                }
                st[g[i][j] - 'A']=true;
            }
        }
        queue<int> q;
        int cnt=0;
        for(int i=0;i<N;i++)
            if(st[i])
            {
                cnt++;
                if(!indeg[i]) q.push(i);
            }
        if(q.empty())
        {
            cout<<"Case #"<<t<<": -1"<<endl;
            continue;
        }
        string res="";
        while(q.size())
        {
            int x=q.front();
            q.pop();
            res+=x+'A';
            if(!--cnt) break;
            for(int i=h[x];~i;i=ne[i])
            {
                int y=e[i];
                indeg[y]--;
                if(!indeg[y]) q.push(y);
            }
        }
        if(q.size()||cnt)
        {
            cout<<"Case #"<<t<<": -1"<<endl;
            continue;
        }
        cout<<"Case #"<<t<<": "<<res<<endl;
    }
    return 0;
}


