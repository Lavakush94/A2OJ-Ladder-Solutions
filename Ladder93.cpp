#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,zero = 0,max = -1,one = 0;
	cin>>n;
	while(n--)
	{
		cin>>a;
		if(a == 1)
		{
			one++;
			if(zero > 0)
				zero--;
		}
		else
		{
			zero++;
			if(zero > max)
				max = zero;
		}
	}
	cout<<one + max<<endl;
}
