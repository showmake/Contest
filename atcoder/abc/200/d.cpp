/*
D - Happy Birthday2
### 构造题
给定序列长度n 则问题空间大小为 $2^n-1$。
由于200的mod集合大小最多为200，根据抽屉原理，如果我们可以构造出201个序列的子序列，则必定会有2个序列mod200的值相同。
由于 $2^8 = 256 $，则当序列的长度大于等于8时，解一定存在，所以问题空间被缩小成201。暴力枚举前201个可选子序列即可求解
*/


#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using  namespace std;

const int N=201;

int n;
int a[N];
vector<vector<int>> b(200,vector<int>(0));

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    int cnt=min(n,8);
    for(int i=0;i<1<<cnt;i++)
    {
        int mod=0;
        vector<int> c;
        for(int j=0;j<cnt;j++)
        {
            if(i&(1<<j))
            {
                mod+=a[j+1];
                mod%=200;
                c.push_back(j+1);
            }
        }
        if(b[mod].size())
        {
            puts("Yes");
            cout<<b[mod].size()<<' ';
            for(auto x:b[mod]) cout<<x<<' ';
            cout<<endl;
            cout<<c.size()<<' ';
            for(auto x:c) cout<<x<<' ';
            return 0;
        }
        else b[mod]=c;
    }
    puts("No");
    return 0;
}