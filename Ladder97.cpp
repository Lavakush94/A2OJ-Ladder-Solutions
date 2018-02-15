#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int i,n,k,sum = 0;
	cin>>n>>k;
	string s;
	cin>>s;
	int hash[26] = {0};
	for(i = 0;i < n;i++)
		hash[s[i] - 'A']++;
	sort(hash,hash + 26);
	for(int i = 25;i >= 0;i--)
	{
		if(hash[i] <= k)
		{
			sum += hash[i] * hash[i];
			k -= hash[i];
			if(k == 0)
				break;
		}
		else
		{
			sum += k * k;
			break;
		}
	}
	cout<<sum<<endl;
	return 0;
}
