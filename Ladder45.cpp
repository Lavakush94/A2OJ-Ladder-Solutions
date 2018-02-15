#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n,m,res(0);
	cin>>n;
	int *a = new int[n];
	for(int i = 0;i < n;i++)
		cin>>a[i];
	cin>>m;
	int *b = new int[m];
	for(int i = 0;i < m;i++)
		cin>>b[i];
	int x = -1,max;
	for(int i = 0;i < n;i++)
	{
		for(int j = m - 1;j >= 0;j--)
		{
			if(b[j] % a[i] == 0)
			{
				max = b[j] / a[i];
				if(max > x)
					x = max;
			}
		}
	}
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < m;j++)
		{
			if(b[j] % a[i] == 0 && b[j] / a[i] == x)
				res++;
		}
	}
	cout<<res<<endl;
	return 0;
}
