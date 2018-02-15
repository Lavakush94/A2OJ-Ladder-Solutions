#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll n,max = -999999999,min = 9999999999;
	int max_i,min_i;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		int a;
		cin>>a;
		if(max < a)
		{
			max = a;
			max_i = i;
		}
		if(min >= a)
		{
			min = a;
			min_i = i;
		}
	}
	cout<<max_i + (n - 1 - min_i) - (min_i < max_i ? 1 : 0) <<endl;
	return 0;
}
