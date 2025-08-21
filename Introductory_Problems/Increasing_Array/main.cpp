//https://cses.fi/problemset/task/1094
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long>x(n);
    for(int i=0; i<n; i++) cin>>x[i];
    long long ans=0;
    for(int i=1; i<n; i++) 
    {
        ans+=max(0LL, x[i-1]-x[i]);
        x[i]=max(x[i], x[i-1]);
    }
    cout<<ans;
    return 0;
}
