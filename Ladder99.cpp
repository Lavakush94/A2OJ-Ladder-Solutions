#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a = new int[n];
	int *b = new int[n];
	int res = n;
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
		cin>>b[i];
	}
	for(int i = 0;i < n;i++)
		for(int j = 0;j < n;j++)
			if(a[i] == b[j] && i != j)
			{
				res--;
				break;
			}
	cout<<res<<endl;
	return 0;
}
