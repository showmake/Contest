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

const int N=1e4+10;

int n,T;
int cnt[26],id[N];

int main()
{
    ios::sync_with_stdio(false);
    cin>>T;
    for(int t=1;t<=T;t++)
    {
        memset(cnt,0,sizeof cnt);
        string str;
        cin>>str;
        n=str.size();
        for(auto c:str) cnt[c-'a']++;
        int p=0,q=1;
        int sum=0;
        while(q<26)
        {
            while(q<26&&sum<cnt[p]) sum+=cnt[q++];

        }
        cout<<"Case #"<<t<<": IMPOSSIBLE"<<endl;
    }
    return 0;
}



