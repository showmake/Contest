//
// Created by zhuzhen on 2021/5/23.
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

const int N=61;

int n,T;
double x,y;
double f[N][N][N];
string st[N][N][N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T>>n;
    for(int t=1;t<=T;t++)
    {
        cin>>x>>y;
        f[1][0][0]=f[0][1][0]=f[0][0][1]=(x+y)/3;
        st[1][0][0]='R',st[0][1][0]='S',st[0][0][1]='P';
        for(int i=2;i<N;i++)
        {
            for(int r=0;r<=i;r++)
            {
                for(int s=0;s+r<=i;s++)
                {
                    int p=i-r-s;
                    double &z=f[r][s][p];
                    string &q=st[r][s][p];
                    z=0;
                    q="";
                    if(r)
                    {
                        if(f[r-1][s][p]+x*p/(i-1)+y*s/(i-1)>z)
                        {
                            z=f[r-1][s][p]+x*p/(i-1)+y*s/(i-1);
                            q=st[r-1][s][p]+'R';
                        }
                    }
                    if(s)
                    {
                        if(f[r][s-1][p]+x*r/(i-1)+y*p/(i-1)>z)
                        {
                            z=f[r][s-1][p]+x*r/(i-1)+y*p/(i-1);
                            q=st[r][s-1][p]+'S';
                        }
                    }
                    if(p)
                    {
                        if(f[r][s][p-1]+x*s/(i-1)+y*r/(i-1)>z)
                        {
                            z=f[r][s][p-1]+x*s/(i-1)+y*r/(i-1);
                            q=st[r][s][p-1]+'P';
                        }
                    }
                }
            }
        }
        double ans=0;
        int end_r=0,end_s=0,end_p=0;
        for(int r=0;r<N;r++)
            for(int s=0;s+r<N;s++)
            {
                int p=60-r-s;
                if(f[r][s][p]>ans)
                {
                    ans=f[r][s][p];
                    end_r=r;
                    end_s=s;
                    end_p=p;
                }
            }
        cout<<"Case #"<<t<<": "<<st[end_r][end_s][end_p]<<endl;
    }
    return 0;
}


