#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,res = -1,max = 0;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		max = max - a + b;
		if(res < max)
			res = max;
	}
	cout<<res<<endl;
}
