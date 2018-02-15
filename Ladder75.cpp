#include <bits/stdc++.h>
#define int long long
using namespace std;
int dp[1000000];
signed main()
{
	int n,k,prev_sum(0),index(0);
	cin>>n>>k;
	for(int i = 0;i < n;i++)
	{
		int a;
		cin>>a;
		dp[i] = a + prev_sum;
		prev_sum = dp[i];
	}
	int min_sum = dp[k - 1];
	for(int i = 0;i + k < n;i++)
	{
		int x = dp[i + k] - dp[i];
		if(x < min_sum)
		{
			min_sum = x;
			index = i + 1;
		}
	}
	cout<<index + 1<<endl;
}
