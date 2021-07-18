/*
 * dp
 * 1 第一个级别的排序是按照sum的大小，所以每个sum对应的数量要预先处理
 * 2 根据k的大小确定 第k个蛋糕对应的sum大小是多少 。
 * 3 分别枚举beauty，确定beauty的大小，递归处理剩下两个数字
 *
 * dp状态的设计
 * 确定的维度 sum
 * 而为了转移sum 我们需要知道当前已经有几个数字被确定了
 * 增加维度 已经确定的数字个数
 *
 */
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

const int N=1e6+10;

int n;
ll k;
ll f[4][N*3];

int main() {
    cin >> n >> k;
    f[0][0] = 1;
    for (int i = 1; i <= 3;i++)
        for (int j = i; j <= i * n; j++)
            f[i][j]=f[i-1][j-1]+f[i][j-1];
    ll cnt=0,sum=0;
    for(int i=3;i<=3*n;i++)
    {
        cnt+=f[3][i];
        if(cnt>=k)
        {
            sum=i;
            break;
        }
    }
    cnt-=f[3][sum];
    cout<<sum<<endl;
    int x,y;
    for(int i=1;i<=n;i++)
    {
        x=sum-i;
        cnt+=f[2][x]/3;
        if(cnt>=k)
        {
            x=i;
            break;
        }
    }
    cnt-=f[2][x];
    sum-=x;
    //cout<<x<<endl;
    for(int i=1;i<=n;i++)
    {
        y=sum-i;
        cnt+=f[1][y]/3;
        if(cnt>=k)
        {
            y=i;
            break;
        }
    }
    sum-=y;
    //cout<<x<<' '<<y<<' '<<sum<<endl;
    return 0;
}

