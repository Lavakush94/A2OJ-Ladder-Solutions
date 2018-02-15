#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,hh,mm,h,m;
	cin>>n;
	cin>>h>>m;
	n = n - 1;
	int res = 1,c = 1;
	while(n--)
	{
		cin>>hh>>mm;
		if(hh == h && mm == m)
		{
			c++;
			if(c > res)
				res = c;
		}
		else
			c = 1;
		h = hh,m = mm;
	}
	cout<<res<<endl;
}
