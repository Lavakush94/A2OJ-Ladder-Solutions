#include <bits/stdc++.h>
#define int long long
#define MAX 1000005
using namespace std;

bool prime[MAX];

void SieveOfEratosthenes()
{
	memset(prime, true, sizeof(prime));
	for (int p = 2;p * p <= MAX;p++)
	{
		if (prime[p] == true)
		{
			for (int i = p * 2;i <= MAX; i += p)
				prime[i] = false;
		}
	}
}
signed main()
{
	SieveOfEratosthenes();
	int n;
	cin>>n;
	while(n--)
	{
		int a;
		cin>>a;
		if(a == 1)
		{
			cout<<"NO\n";
			continue;
		}
		int x = sqrt(a);
		if(prime[x] && x * x == a)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
