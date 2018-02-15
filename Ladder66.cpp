#include <bits/stdc++.h>
using namespace std;
int main()
{
	int prev,n,k,c(1);
	cin>>n>>k;
	for(int i = 1;i <= n;i++)
	{
		int a;
		cin>>a;
		if(a == prev)
			c++;
		else
			c = 1;
		prev = a;
	}
	if(c + k > n)
		cout<<(n - c)<<endl;
	else
		cout<<"-1\n";
}
