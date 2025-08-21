//https://cses.fi/problemset/task/1068
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    long long n;
    cin>>n;
    while(n!=1)
    {
        cout<<n<<' ';
        if(n&1)n=n*3+1;
        else n>>=1;
    }
    cout<<1;
    return 0;
}
