#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,min_l,max_r,res = 1;
	cin>>n;
	cin>>min_l>>max_r;
	for(int i = 2;i <= n;i++)
	{
		int l,r;
		cin>>l>>r;
		if(l <= min_l && r >= max_r)
		{
			res = i;
			//cout<<res<<endl;
		}
		else if(l < min_l || r > max_r)
			res = -1;
 		min_l = min(min_l,l);
 		max_r = max(max_r,r);
	}
	cout<<res<<endl;
}
