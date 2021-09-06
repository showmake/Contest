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

const int N=30,M=100;

int n,T;
int nums[N],r[N];
int h[N],e[M],w[M],ne[M],idx;
bool st[N];
int d[N],cnt[N];

inline void add(int x,int y,int z)
{
    e[idx]=y,w[idx]=z,ne[idx]=h[x],h[x]=idx++;
}

void build(int x)
{
    memset(h,-1,sizeof h);
    idx=0;
    add(0,24,x),add(24,0,-x);
    for(int i=1;i<=24;i++)
    {
        add(i-1,i,0);
        add(i,i-1,-nums[i]);
    }
    for(int i=8;i<=24;i++) add(i-8,i,r[i]);
    for(int i=1;i<=7;i++) add(i+16,i,r[i]-x);
}

bool spfa(int mid)
{
    memset(d,-0x3f,sizeof d);
    memset(st,false,sizeof st);
    memset(cnt,0,sizeof cnt);
    build(mid);
    queue<int> q;
    for(int i=0;i<=24;i++) q.push(i),st[i]=true;
    while (q.size())
    {
        int x=q.front();q.pop();
        st[x]=false;
        for(int i=h[x];~i;i=ne[i])
        {
            int y=e[i];
            if(d[y]<d[x]+w[i])
            {
                cnt[y]=cnt[x]+1;
                if(cnt[y]>=25) return false;
                d[y]=d[x]+w[i];
                if(!st[y])
                {
                    st[y]=true;
                    q.push(y);
                }
            }
        }
    }
    return true;
}


int main()
{
    cin>>T;
    while (T--)
    {
        memset(nums,0,sizeof nums);
        for(int i=1;i<=24;i++) cin>>r[i];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            nums[x+1]++;
        }
        bool flag=false;
        for(int i=0;i<=1000;i++)
            if(spfa(i))
            {
                cout<<i<<endl;
                flag=true;
                break;
            }
        if(!flag) puts("No Solution");
    }
    return 0;
}












