#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n,m,sum = 0;
	cin>>n>>m;
	int *a = new int[m];
	for(int i = 0;i < m;i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	if(sum == n)
		cout<<n<<" "<<n<<endl;
	else
	{
		sort(a,a + m);
		while(n != 0)
	}
}
