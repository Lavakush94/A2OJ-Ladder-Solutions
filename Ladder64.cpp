#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int t,sx,sy,ex,ey;
	cin>>t>>sx>>sy>>ex>>ey;
	string s;
	cin>>s;
	if(sx == ex && sy == ey)
	{
		cout<<"0\n";
		return 0;
	}
	for(int i = 0;i < t;i++)
	{
		if(s[i] == 'E' && sx < ex)
			sx += 1;
		if(s[i] == 'S' && sy > ey)
			sy -= 1;
		if(s[i] == 'W' && sx > ex)
			sx -= 1;
		if(s[i] == 'N' && sy < ey)
			sy += 1;
		if(sx == ex && sy == ey)
		{
			cout<<(i + 1)<<endl;
			return 0;
		}
	}
	cout<<"-1\n";
	return 0;
}
