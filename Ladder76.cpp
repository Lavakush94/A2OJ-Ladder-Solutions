#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,a_min(999999),b_min(999999),a_max(0),b_max(0);
	cin>>n>>m;
	while(n--)
	{
		cin>>a;
		if(a > a_max)
			a_max = a;
		if(a < a_min)
			a_min = a;
	}
	while(m--)
	{
		cin>>a;
		if(a < b_min)
			b_min = a;
		if(a > b_max)
			b_max = a;
	}
	int tl = -1;
	if((b_min - 1) <= a_max)
		tl = a_max;
	else
	{
		tl = a_min * 2;
		if(tl < a_max)
			tl += a_max - tl;
	}
	if(tl >= 2 * a_min && tl < b_min)
		cout<<tl<<endl;
	else
		cout<<"-1\n";
}
