#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int z(0),o(0);
	int l = s.size();
	for(int i = 0;i < l;i++)
	{
		if(s[i] == '1')
			o++;
		else if(o >= 7)
		{
			cout<<"YES\n";
			return 0;
		}
		else
			o = 0;
		if(s[i] == '0')
			z++;
		else if(z >= 7)
		{
			cout<<"YES\n";
			return 0;
		}
		else
			z = 0;
	}
	if(o >= 7 || z >= 7)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
