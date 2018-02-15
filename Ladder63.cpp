#include <bits/stdc++.h>
using namespace std;
int main()
{
	int freq[26] = {0},oddFRQ = 0;
	string s;
	cin>>s;
	int l = s.size();
	if(l == 1)
	{
		cout<<"First\n";
		return 0;
	}
	for(int i = 0;i < l;i++)
		freq[s[i] - 'a']++;
	for(int i = 0;i < 26;i++)
	{
		if(freq[i] % 2 == 1)
			oddFRQ++;
	}
	if(oddFRQ == 0)
	{
		cout<<"First\n";
		return 0;
	}
	if(oddFRQ == 1)
	{
		cout<<"First\n";
		return 0;
	}
	if(oddFRQ % 2 == 0)
	{
		cout<<"Second\n";
		return 0;
	}
	cout<<"First\n";
	return 0;
}
