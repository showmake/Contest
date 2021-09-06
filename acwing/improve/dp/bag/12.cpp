#include <iostream>

using namespace std;

const int N=1100;

int n,m;
int w[N],v[N],f[N][N],pos[N][N];

int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
    for(int i=n;i;i--)
    {
        for(int j=0;j<=m;j++)
        {
            f[i][j]=f[i+1][j];
            if(j>=v[i]) f[i][j]=max(f[i][j],f[i+1][j-v[i]]+w[i]);
        }
    }
    int i=1,j=m;
    while(i<=n)
    {
        if(j>=v[i]&&f[i+1][j-v[i]]+w[i]>=f[i+1][j])
        {
            j-=v[i];
            cout<<i<<' ';
        }
        i++;
    }
    return 0;
}