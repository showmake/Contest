AcWing
        首页
题库
        题解
分享
        问答
活动
        竞赛
应用
        吐槽
ame 的头像   ame
        AcWing 532. 货币系统
        作者： 作者的头像   ame ,  2021-06-07 11:30:53 ,  阅读 1

0


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

const int N=110,M=25100;

int n,m;
bool f[M],st[N];
int a[N];

bool check()
{
    for(int i=1;i<=n;i++)
        if(!f[a[i]]) return false;
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    int T;
    cin>>T;
    while (T--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+1+n);
        m=a[n];
        memset(f,false,sizeof f);
        memset(st,false,sizeof st);
        f[0]= true;
        for(int i=1;i<=n;i++)
        {
            for(int j=a[i];j<=m;j++)
            {
                if(!f[j]&&f[j-a[i]]) st[i]=true;
                f[j]|=f[j-a[i]];
            }
            if(check())
            {
                int res=0;
                for(int i=1;i<=n;i++) res+=st[i];
                cout<<res<<endl;
                break;
            }
        }
    }
    return 0;
}
