#include <bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	int m[12];
	cin>>k;
	for(int i = 0;i < 12;i++)
		cin>>m[i];
	sort(m,m + 12);
	int sum(0),res(0);
	for(int i = 11;i >= 0;i--)
	{
		if(sum >= k)
			break;
		sum += m[i];
		res++;
	}
	if(sum < k)
		cout<<"-1\n";
	else
		cout<<res<<endl;
	return 0;
}
