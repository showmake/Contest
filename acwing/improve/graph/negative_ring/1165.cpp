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

const int N=1e5+10,M=1e6+10;

struct Node
{
    int w;
    string t;
}v[N];


int n;
string str;
unordered_map<string,vector<int>> H;
int h[N],e[M],ne[M],idx;
int cnt[N];
double d[N];
bool st[N];

inline void add(int x,int y)
{
    e[idx]=y,ne[idx]=h[x],h[x]=idx++;
}

bool spfa(double mid)
{
    memset(d,0x3f,sizeof d);
    memset(st,false,sizeof st);
    memset(cnt,0,sizeof cnt);
    stack<int> q;
    for(int i=1;i<=n;i++) q.push(i),st[i]= true;
    while (q.size())
    {
        int x=q.top();q.pop();
        st[x]= false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]>d[x]+mid-v[x].w)
            {
                cnt[y]=cnt[x]+1;
                if(cnt[y]>=n) return true;
                d[y]=d[x]+mid-v[x].w;
                if(!st[y]) q.push(y),st[y]=true;
            }
        }
    }
    return false;
}


int main()
{
    //ios::sync_with_stdio(false);
    while(cin>>n,n)
    {
        H.clear();
        idx=0;
        memset(h,-1,sizeof h);
        for(int i=1;i<=n;i++)
        {
            scanf("%s",&str);
            int len= str.size();
            string s=str.substr(0,2),t=str.substr(len-2,2);
            v[i]={len,t};
            H[s].emplace_back(i);
        }
        for(int i=1;i<=n;i++)
        {
            string t=v[i].t;
            for(auto id:H[t]) add(i,id);
        }
        double l=0,r=1e6;
        while (r-l>1e-5)
        {
            double mid=(l+r)/2;
            if(spfa(mid)) l=mid;
            else r=mid;
        }
        if(l==0) puts("No solution");
        else printf("%.2lf\n",l);
    }
    return 0;
}










