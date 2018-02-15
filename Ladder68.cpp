#include <bits/stdc++.h>
using namespace std;
int main()
{
	bool flag = true;
	int hash[100] = {0};
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	//cout<<s1<<endl;
	//cout<<s2<<endl;
	int l = s1.size();
	int m = s2.size();
	for(int i = 0;i < l;i++)
		hash[s1[i] - 'A']++;
	for(int i = 0;i < m;i++)
	{
		hash[s2[i] - 'A']--;
		if(hash[s2[i] - 'A'] < 0)
		{
			flag = false;
			break;
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
