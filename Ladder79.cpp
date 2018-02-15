#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s,a,b;
	int n;
	cin>>n;
	cin>>s;
	a = s.substr(0,n);
	b = s.substr(n,2 * n);
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	bool less = true,greater = true;
	for(int i = 0;i < (int)a.size();i++)
	{
		if(a[i] >= b[i])
		{
			less = false;
			break;
		}
	}
	for(int i = 0;i < (int)b.size();i++)
	{
		if(a[i] <= b[i])
		{
			greater = false;
			break;
		}
	}
	if(less || greater)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
}
