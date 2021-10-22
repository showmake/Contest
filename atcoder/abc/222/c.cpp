#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <cmath>
#include <unordered_set>
#include <unordered_map>

using namespace  std;
using ll= long long;
using pii =pair<int,int> ;

const int N=110,M=110;

int n,m;
char g[N][M];

struct Person
{
    int id,rank;
    bool operator < (const Person &rms) const { return rank > rms.rank || rank == rms.rank && id <rms.id ;}
}p[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>m;
    for(int i=1;i<=2*n;i++) cin>>g[i]+1;
    for(int i=1;i<=2*n;i++) p[i].id=i;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            int id1=p[2*j-1].id,id2=p[2*j].id;
            int &x=p[2*j-1].rank,&y=p[2*j].rank;
            char op1=g[id1][i],op2=g[id2][i];
            if(op1==op2) continue;
            else
            {
                if(op1=='G'&&op2=='C') x++;
                if(op1=='C'&&op2=='G') y++;
                if(op1=='C'&&op2=='P') x++;
                if(op1=='P'&&op2=='C') y++;
                if(op1=='P'&&op2=='G') x++;
                if(op1=='G'&&op2=='P') y++;
            }
        }
        sort(p+1,p+2*n+1);
        //for(int i=1;i<=2*n;i++) cout<<p[i].id<<' '<<p[i].rank<<endl;
        //cout<<endl;
    }
    for(int i=1;i<=2*n;i++) cout<<p[i].id<<endl;
    return 0;
}



