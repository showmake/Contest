//
// Created by zhuzhen on 2021/5/22.
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

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=2*1e5+10;
int son[N][    N];
int h[N],e[N],ne[N],idx;
int n;

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

void bfs()
{
    queue<int> q;
    q.push(1);
    while(q.size())
    {
        int len=q.size();
        for(int i=0;i<len;i++)
        {
            int cur=q.front();q.pop();

        }
    }
}

int main() {
    memset(h,-1,sizeof  h);
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        int x,y;
        cin>>x>>y;
        add(x,y);
    }

    return 0;
}

