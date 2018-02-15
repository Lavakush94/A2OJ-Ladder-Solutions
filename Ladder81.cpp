#include <bits/stdc++.h>
#define int long long
using namespace std;
int dp[1000000] = {0};

int countDivisors(int n)
{
	int cnt = 0;
	for (int i=1; i<=sqrt(n); i++)
	{
		if (n%i==0)
		{
			if (n/i == i)
			cnt++;

			else 
				cnt = cnt+2;
		}
	}
	return cnt;
}

signed main()
{
	int a,b,c,res = 0;
	cin>>a>>b>>c;
	for(int i = 1;i <= a;i++)
	{
		for(int j = 1;j <= b;j++)
		{
			for(int k = 1;k <= c;k++)
			{
				signed x = i * j * k;
				//cout<<x<<"divisiors of x : "<<countDivisors(x)<<endl;
				if(dp[x] == 0)
				{
					dp[x] = countDivisors(x);
					res += dp[x];
				}
				else
					res += dp[x];
				
			}
		}
	}
	cout<<res<<endl;
}	
