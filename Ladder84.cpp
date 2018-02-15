#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum1(0),sum2(0);
	cin>>n;
	int *s1 = new int[n + 1];
	int *s2 = new int[n + 1];
	for(int i = 0;i < n;i++)
	{
		cin>>s1[i]>>s2[i];
		sum1 += s1[i];
		sum2 += s2[i];
	}
	if(sum1 % 2 == 0 && sum2 % 2 == 0)
	{
		cout<<"0\n";
		return 0;
	}
	if((sum1 % 2 != 0 && sum2 % 2 == 0) || (sum2 % 2 != 0 && sum1 % 2 == 0))
	{
		cout<<"-1\n";
		return 0;
	}
	if(n == 1 && (sum1 % 2 != 0 || sum2 % 2 != 0))
	{
		cout<<"-1\n";
		return 0;
	}
	for(int i = 0;i < n;i++)
	{
		if((s1[i] % 2 == 0 && s2[i] % 2 != 0) || (s2[i] % 2 == 0 && s1[i] % 2 != 0))
		{
			cout<<"1\n";
			return 0;
		}
	}
	cout<<"-1\n";
	return 0;
}
