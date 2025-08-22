//https://cses.fi/problemset/task/1072
#include <bits/stdc++.h>
using namespace std;

constexpr int N=1e5+1;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<long long> ans(N);
    for(long long i=2; i<N; i++) ans[i]=ans[i-1]+2*i*i*i-3*i*i-7*i+16;
    for(int k=1; k<=n; k++) cout<<ans[k]<<'\n';
    return 0;
}
