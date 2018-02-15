#include <bits/stdc++.h>
using namespace std;
int arr[8];
int main()
{
	int n;
	cin>>n;
	for(int i = 1;i < 8;i++)
		cin>>arr[i];
	int res = 8;
	while(n > 0)
	{
		res = (res % 8) + 1;
		n = n - arr[res];
	}
	cout<<res<<endl;
	return 0;
}
