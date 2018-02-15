#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,t = 0,h = 0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a == 100)
			h++;
		else
			t++;
	}
	if(h % 2 == 1)
		cout<<"NO\n";
	else if(h == 0 && t % 2 == 1)
		cout<<"NO\n";
	else
		cout<<"YES\n";
	return 0;
}
