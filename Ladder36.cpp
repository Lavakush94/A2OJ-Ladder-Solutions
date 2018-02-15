#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int *a = new int[n + 1];
	for(int i = 1;i < n + 1;i++)
		cin>>a[i];
	long long min = 99999999,p1,p2;
	for(int i = 1;i < n;i++)
	{
		int x = abs(a[i] - a[i + 1]);
		if(x < min)
		{
			min = x;
			p1 = i;
			p2 = i + 1;
		}
	}
	if(abs(a[n] - a[1]) < min)
	{
		p1 = n;
		p2 = 1;
	}
	cout<<p1<<" ";
	cout<<p2<<endl;
	return 0;
}
