#include <bits/stdc++.h>
using namespace std;
int main()
{
	int res = 0;
	int n;
	cin>>n;
	while(n--)
	{
		string s;
		cin>>s;
		if(s[1] == '-')
			res--;
		else
			res++;
	}
	cout<<res<<endl;
}
