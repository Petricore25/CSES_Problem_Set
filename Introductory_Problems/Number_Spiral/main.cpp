//https://cses.fi/problemset/task/1071
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
        long long y, x;
        cin>>y>>x;
        long long ans;
        if(y>=x) ans=(y%2==0 ? y*y-x+1:(y-1)*(y-1)+x);
        else ans=(x&1 ? x*x-y+1:(x-1)*(x-1)+y);
        cout<<ans<<'\n';
    }
    return 0;
}
