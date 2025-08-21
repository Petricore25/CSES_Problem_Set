//https://cses.fi/problemset/task/1083
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=0; i<n-1; i++)
    {
        int x;
        cin>>x;
        v[x]=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(!v[i]) 
        {
            cout<<i; 
            break;
        }
    }
    return 0;
}
