#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int l = s.size(),z = -1;
	for(int i = 0;i < l;i++)
	{
		if(s[i] == '0')
		{
			z = i;
			s[i] = '?';
			break;
		}
	}
	if(z == -1)
	{
		for(int i = 0;i < l - 1;i++)
			cout<<s[i];
		cout<<endl;
		return 0;
	}
	for(int i = 0;i < l;i++)
	{
		if(s[i] != '?')
			cout<<s[i];
	}
	cout<<endl;
	return 0;
}
