#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n,count = 0,k;
	cin>>n;
	for(int a = 1;a <= n;a++)
	{
		for(int b = a;b <= n;b++)
		{
			if(a * a + b * b > n * n)
				break;
			k = sqrt(a * a + b * b);
			if(k <= n && k * k == a * a + b * b)
				count++;
		}
	}
	cout<<count<<endl;
}
