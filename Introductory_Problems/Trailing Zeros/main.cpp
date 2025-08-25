//https://cses.fi/problemset/task/1618
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n, ans=0;
    cin>>n;
    while(n>0)
    {
        ans+=n/5;
        n/=5;
    }
    cout<<ans;
    return 0;
}
