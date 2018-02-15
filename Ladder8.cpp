#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int lucky = 0;
	int len = s.size();
	for(int i = 0;i < len;i++)
		if(s[i] == '4' || s[i] == '7')
			lucky++;
	if(lucky == 4 || lucky == 7)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
