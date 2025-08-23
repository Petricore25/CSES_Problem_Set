//https://cses.fi/problemset/task/1092
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    long long n;
    cin>>n;
    long long s=n*(n+1)/2;
    if(s&1) cout<<"NO";
    else
    {
        cout<<"YES\n";
        s>>=1;
        int cnt=0;
        vector<int> v(n+1);
        for(int x=n; x>=1; x--) 
        {
            if(s>=x && !v[x])
            {
                v[x]=1;
                cnt++;
                s-=x;
            }
        }
        cout<<cnt<<'\n';
        for(int i=1; i<=n; i++) if(v[i]) cout<<i<<' ';
        cout<<'\n'<<n-cnt<<'\n';
        for(int i=1; i<=n; i++) if(!v[i]) cout<<i<<' ';
    }
    return 0;
}
