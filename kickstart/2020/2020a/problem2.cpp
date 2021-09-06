//
// Created by zhuzhen on 2021/5/17.
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

const int N=51,M=31;

int n,T,m,K;
int w[N][M],f[N][N*M];

int main()
{
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        memset(f,0,sizeof f);
        memset(w,0,sizeof w);
        cin >> n >> m >> K;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> w[i][j];
                w[i][j] += w[i][j - 1];
            }
        }
        for (int i = 1; i <=n; i++)
        {
            for (int j = 1; j <=K; j++)
            {
                for (int k = 0; k <=min(j,m); k++)
                {
                    f[i][j] = max(f[i][j], f[i - 1][j-k] + w[i][k]);
                }
                //cout<<i<<' '<<j<<' '<<f[i][j]<<endl;
            }
        }
        cout<<"Case #"<<t<<": "<<f[n][K]<<endl;
    }
    return 0;
}


