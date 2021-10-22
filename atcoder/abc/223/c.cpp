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

const int N=1e5+10;

int n;
double a[N],b[N];
double s[N],t[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i]>>b[i];
    for(int i=2;i<=n;i++) s[i]=s[i-1]+a[i-1]/b[i-1];
    for(int i=n;i;i--) t[i]=t[i+1]+a[i]/b[i];
    //for(int i=1;i<=n;i++) cout<<s[i]<<" "<<t[i]<<endl;
    int idx=1;
    while (idx<n&&s[idx+1]<=t[idx+1]) idx++;
    double res=0;
    for(int i=1;i<idx;i++) res+=a[i];
    res+=(a[idx]-(s[idx]-t[idx+1])*b[idx])/2;
    printf("%.6lf\n",res);
    return 0;
}



