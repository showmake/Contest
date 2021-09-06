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

const int N=30;

int n,m;
char str[4];
int d[N][N];

void floyd()
{
    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                d[i][j]|=(d[i][k]&&d[k][j]);
}

int check()
{
    //0 有矛盾  1  确定 2 不能确定
    bool flag=true;
    for(int i=0;i<n;i++)
    {
        if(d[i][i]) return 0;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            if(!d[i][j]&&!d[j][i]) flag=false;
        }
    }
    if(flag) return 1;
    else return 2;
}

int main()
{
    while(cin>>n>>m,n||m)
    {
        int ans=2333,t=0;
        bool flag=false;
        memset(d,0,sizeof d);
        for(int i=0;i<m;i++)
        {
            cin>>str;
            if(flag) continue;
            d[str[0]-'A'][str[2]-'A']=1;
            floyd();
            int res=check();
            if(res==0)
            {
                t=i+1;
                ans=0;
                flag=true;
            }
            else if(res==1)
            {
                t=i+1;
                ans=1;
                flag=true;
            }
        }
        if(ans==0) printf("Inconsistency found after %d relations.\n",t);
        else if(ans==1)
        {
            printf("Sorted sequence determined after %d relations: ",t);
            int cnt[n],id[n];
            for(int i=0;i<n;i++) id[i]=i,cnt[i]=0;
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    cnt[i]+=d[i][j];
            auto cmp=[&](int u,int v) { return cnt[u]>cnt[v]; };
            sort(id,id+n,cmp);
            string s="";
            for(int i=0;i<n;i++) s+=id[i]+'A';
            cout<<s<<'.'<<endl;
        }
        else puts("Sorted sequence cannot be determined.");
    }
    return 0;
}









