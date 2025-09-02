//https://cses.fi/problemset/task/2205
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int> bits(n);
    auto out=[&]() {for(int i=0; i<n; i++) cout<<bits[i]; cout<<'\n';};
    out();
    auto solve=[&](auto &self, int j)->void 
    {
        for(int i=n-1; i>j; i--)
        {
            bits[i]^=1;
            out();
            self(self, i);
        }
    };
    solve(solve, -1);
    return 0;
}
