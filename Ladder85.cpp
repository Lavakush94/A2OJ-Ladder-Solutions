#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int n,a,tf = 0,ft = 0,count = 0;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		cin>>a;
		if(a == 25)
		{
			tf++;
			count++;
		}
		else if(a == 50 && tf > 0)
		{
			tf--;
			ft++;
			count++;
		}
		else if(a == 100 && ft > 0 && tf > 0)
		{
			tf--;
			ft--;
			count++;
		}
		else if(a == 100 && ft == 0 && tf > 2)
		{
			tf -= 3;
			count++;
		}
	}
	//cout<<tf<<" "<<ft<<" "<<count<<endl;
	if(count == n)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
