#pragma GCC optimize(2)
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

const int N=5*1e4+10;

struct Seg
{
    int l,r,cnt;
    bool operator < (const Seg& rms) const { return r<rms.r; }
}seg[N];

int n;
bool st[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>n;
    for(int i=0;i<n;i++) cin>>seg[i].l>>seg[i].r>>seg[i].cnt;
    sort(seg,seg+n);
    int res=0;
    for(int i=0;i<n;i++)
    {
        int l=seg[i].l,r=seg[i].r,cnt=seg[i].cnt;
        int sum=0;
        for(int i=l;i<=r;i++) sum+=st[i];
        if(sum>=cnt) continue;
        cnt-=sum;
        res+=cnt;
        for(int i=r;i>=l&&cnt;i--)
        {
            if(!st[i]) st[i]=true,cnt--;
        }
    }
    cout<<res<<endl;
    return 0;
}












