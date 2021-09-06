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

const int N=210,M=1e6+10;

int n;
string str[N];
int tr[M][26],idx,ne[M],cnt[M];
int q[M];

void insert(string s)
{
    int p=0;
    for(int i=0;i<s.size();i++)
    {
        int c=s[i]-'a';
        if(!tr[p][c]) tr[p][c]=++idx;
        p=tr[p][c];
        cnt[p]++;
    }
}

void build()
{
    int hh=0,tt=-1;
    for(int i=0;i<26;i++)
        if(tr[0][i]) q[++tt]=tr[0][i];
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
                int k=c;
                while(ne[k])
                {
                    cnt[ne[k]]+=cnt[c];
                    k=ne[k];
                }
            }
        }
    }
}

int query(string s)
{
    int p=0;
    for(int i=0;i<s.size();i++)
    {
        int c=s[i]-'a';
        p=tr[p][c];
    }
    return cnt[p];
}


int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
        insert(str[i]);
    }
    build();
    for(int i=0;i<n;i++)
        cout<<query(str[i])<<endl;
    return 0;
}


