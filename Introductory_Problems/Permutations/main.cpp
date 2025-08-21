//https://cses.fi/problemset/task/1070
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin>>n;
    if(n>1 && n<=3) cout<<"NO SOLUTION";
    else
    {
        for(int i=(n&1 ? n:n-1); i>=1; i-=2) cout<<i<<' ';
        for(int i=(n&1 ? n-1:n); i>=2; i-=2) cout<<i<<' ';
    }
    return 0;
}
