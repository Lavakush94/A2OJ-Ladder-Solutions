#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n,ans = 0;
	cin>>n;
	int *a = new int[n];
	for(int i = 0;i < n;i++)
		cin>>a[i];
	sort(a,a + n);
	for(int i = 1;i <= n;i++)
		ans += abs(a[i - 1] - i);
	cout<<ans<<endl;
	return 0;
}
