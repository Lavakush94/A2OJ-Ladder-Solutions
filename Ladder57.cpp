#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int *a = new int[m];
	for(int i = 0;i < m;i++)
		cin>>a[i];
	sort(a,a + m);
	int res = 999999999,x = m - n;
	for(int k = 0;k <= x;k++)
		res = min(res,(a[n + k - 1] - a[k]));
	cout<<abs(res)<<endl;
}
