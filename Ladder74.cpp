#include <bits/stdc++.h>
using namespace std;

int main()
{
	int hash[1001] = {0};	
	int n;
	bool inf = false;
	cin>>n;
	int n1 = n;
	while(n1--)
	{
		int a;
		cin>>a;
		hash[a]++;
	}
	int mst_frqnt = 0;
	for(int i = 0;i < 1001;i++)
	{
		if(hash[i] != 0 && mst_frqnt < hash[i])
			mst_frqnt = hash[i];
	}
	inf = (((n + 1) / 2) >= mst_frqnt);
	if(inf)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
