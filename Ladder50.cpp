#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[26] = {0},k;
	string s;
	string str;
	cin>>k>>s;
	int l = s.size();
	for(int i = 0;i < l;i++)
		a[s[i] - 'a']++;
	int i;
	for(i = 0;i < 26;i++)
	{
		if(a[i] % k != 0)
			break;
		else
			str.append(a[i] / k,i + 'a');
	}
	if(i == 26)
	{
		for(int i = 0;i < k;i++)
			cout<<str;
	}
	else
		cout<<"-1";
	cout<<endl;
	return 0;
}
