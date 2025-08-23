//https://cses.fi/problemset/task/1617
#include <bits/stdc++.h>
using namespace std;

constexpr int mod=1e9+7;

long long fast_exp(long long base, long long exp)
{
    long long ans=1LL;
    base%=mod;
    if(base<0) base+=mod;
    while(exp>0)
    {
        if(exp&1)
        {
            ans=(ans*base)%mod;
            exp--;
        }
        base=(base*base)%mod;
        exp>>=1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    cout<<fast_exp(2, n);
    return 0;
}
