#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum(0);
	cin>>n;
	int *a = new int[n];
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	if(sum % n == 0)
		cout<<n;
	else
		cout<<(n - 1);
	cout<<endl;
	return 0;
}
