#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	for(int i = 0;i < n;i++)
		cin>>a[i];
	sort(a,a + n);
	int max = a[n - 1];
	int min = a[0];
	int c1 = 0,c2 = 0,cnt = 0;
	for(int i = 0;i < n;i++)
	{
		if(a[i] == max)
			c1++;
		if(a[i] == min)
			c2++;
		if(a[i] == a[i + 1])
			cnt++;
 	}
 	if((cnt + 1) == n)
		cout<<(max - min)<<" "<<(n*(n - 1) / 2)<<endl;
	else
		cout<<(max - min)<<" "<<c1 * c2<<endl;
}
