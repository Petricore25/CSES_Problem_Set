//https://cses.fi/problemset/task/1755
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr);
    string s;
    cin>>s;
    vector<int> f(26);
    for(int i=0; i<s.length(); i++) f[s[i]-'A']++;
    int cnt=0;
    for(int i=0; i<26; i++) if(f[i]&1) cnt++;
    if(cnt>1 || cnt==1 && s.length()%2==0) cout<<"NO SOLUTION";
    else
    {
        for(int i=0; i<26; i++) if(f[i]%2==0) for(int j=0; j<f[i]/2; j++) cout<<char('A'+i);
        for(int i=0; i<26; i++) 
        {
            if(f[i]&1) 
            {
                for(int j=0; j<f[i]; j++) cout<<char('A'+i);
                break;
            }
        }
        for(int i=25; i>=0; i--) if(f[i]%2==0) for(int j=0; j<f[i]/2; j++) cout<<char('A'+i);
    }
    return 0;
}
