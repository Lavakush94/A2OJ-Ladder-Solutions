#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n,m,sum(0);
	cin>>n>>m;
	int *a = new int[n];
	for(int i = 0;i < n;i++)
		cin>>a[i];
	sort(a,a + n);
	for(int i = 0;i < m;i++)
	{
		if(a[i] >= 0)
			break;
		sum += a[i];
	}
	cout<<abs(sum)<<endl;
}
