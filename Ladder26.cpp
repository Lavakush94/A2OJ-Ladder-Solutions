#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	bool flag = false;
	int l = s.size();
	for(int i = 0;i < l;i++)
		if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9')
		{
			flag = true;
			break;
		}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
