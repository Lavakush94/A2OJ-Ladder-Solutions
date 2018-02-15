#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    ll n,m,c(0),l(1),res(0);
    cin>>n>>m;  
    for(int i = 0;i < m;i++)
    {   
        cin>>c;
        res += c - l;
        if(c < l)
             res += n;
        l = c;    
    }
    cout<<res<<endl;
    return 0;
}
