#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,f = 0;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		int x;
		cin>>x;
		f += x;
	}
	int res = 0;
	for(int i = 1;i <= 5;i++)
	{
		if((f + i) % (n + 1) != 1)
			res++;
	}
	cout<<res<<endl;
}

