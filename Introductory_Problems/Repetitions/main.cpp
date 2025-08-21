//https://cses.fi/problemset/task/1069
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    string s;
    cin>>s;
    int n=s.length(), ans, tmp;
    ans=tmp=1;
    for(int i=1; i<n; i++) 
    {
        if(s[i]==s[i-1]) tmp++;
        else tmp=1;
        ans=max(ans, tmp);
    }
    cout<<ans;
    return 0;
}
