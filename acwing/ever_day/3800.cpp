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

const int N=1e5+10;

int n,T,m;

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    while (T--)
    {
        cin>>m>>n;
        int sum=0;
        for(int i=n-1;~i;i--)
        {
            int x;
            cin>>x;
            if(i)
            {
                if(m%2&&x%2) sum++;
            }
            else
            {
                if(x%2) sum++;
            }
        }
        if(sum%2==0) cout<<"even"<<endl;
        else cout<<"odd"<<endl;
    }
    return 0;
}









