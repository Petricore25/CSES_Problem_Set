//https://cses.fi/problemset/task/1754
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
        int a, b;
        cin>>a>>b;
        int x=min(a, b)-abs(a-b);
        cout<<(x>=0 && x%3==0 ? "YES\n":"NO\n");
    }
    return 0;
}
