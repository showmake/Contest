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

const int N=1e4+10,M=1e6+10,S=51;

int n,T;
int tr[N*S][26],cnt[N*S],idx;
char str[M];
int ne[N*S];

void insert()
{
    int p=0;
    for(int i=0;str[i];i++)
    {
        int c=str[i]-'a';
        if(!tr[p][c]) tr[p][c]=++idx;
        p=tr[p][c];
    }
    cnt[p]++;
}

void build()
{
    int hh=0,tt=-1;
    int q[N*S];
    for(int i=0;i<26;i++)
        if(tr[0][i])
            q[++tt]=tr[0][i];
    while(hh<=tt)
    {
        int cur=q[hh++];
        for(int i=0;i<26;i++)
        {
            int c=tr[cur][i];
            if(!c) tr[cur][i]=tr[ne[cur]][i];
            else
            {
                ne[c]=tr[ne[cur]][i];
                q[++tt]=c;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>n;
        //init
        memset(tr,0,sizeof tr);
        memset(cnt,0,sizeof cnt);
        memset(ne,0,sizeof ne);
        idx=0;
        //构建trie树
        for(int i=0;i<n;i++)
        {
            cin>>str;
            insert();
        }
        //构建ac自动机
        build();
        //模式匹配
        cin>>str;
        int res=0;
        for(int i=0,j=0;str[i];i++)
        {
            int c=str[i]-'a';
            j=tr[j][c];
            int p=j;
            while(p)
            {
                res+=cnt[p];
                cnt[p]=0;
                p=ne[p];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}





