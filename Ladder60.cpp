#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	char s[101][101];
	cin>>n>>m;
	for(int i = 0;i < n;++i)
    {
        for(int j = 0;j < m;++j)
        {
            cin>>s[j][i];
            if(s[j][i] == '.')
            {
                if((j+i) % 2 == 0)
					s[j][i]='B';
                else 
					s[j][i]='W';
            }
        }
    }
    for(int i = 0;i < n;++i)
    {
        for(int j = 0;j < m;++j)
            cout<<s[j][i];
        cout<<endl;
    }
	return 0;
}
