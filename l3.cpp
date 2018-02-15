#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,t;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{
		for(int j = 0;j < n;j++)
		{
			if(s[j + 1] == 'G' && s[j] == 'B')
			{
				s[j + 1] = 'B';
				s[j] = 'G';
				j++;
			}
		}
	}
	cout<<s<<endl;
}
