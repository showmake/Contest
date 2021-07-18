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

const int N=1e5+10;

int n;
priority_queue<int> heap;

int main()
{
    //freopen("test.in","r",stdin);
    //freopen("test2.out","w",stdout);
    ios::sync_with_stdio(false);
    cin>>n;
    int sum=0;
    while (n--)
    {
        int x;
        cin>>x;
        sum+=x;
        heap.push(x);
    }
    while (heap.size()>1)
    {
        int a= heap.top();heap.pop();
        int b= heap.top();heap.pop();
        heap.push(a-b);
    }
    int d= heap.top();
    cout<<(sum+d)/2<<endl;
    return 0;
}


