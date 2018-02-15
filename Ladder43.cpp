#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{   
    string s,t;
    cin>>s>>t;
    int c = 0;
    int l = s.size();
    int m = t.size();
    if(l != m)
    {
        cout<<"NO\n";
        return 0;
    }
    int k = l - 1;
    for(int i = 0;i < l;i++)
    {
        if(s[i] == t[k--])
            c++;
    }
    if(c == l)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
