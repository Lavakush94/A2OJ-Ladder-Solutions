#include <bits/stdc++.h>
using namespace std;
int main()
{
	int y,k,n;
	bool flag = false;
	cin>>y>>k>>n;
	//int x = k % 2 == 0 ? 2 : 1;
	for(int i = (k - y % k);(i + y) <= n;i += k)
	{
		flag = true;
		cout<<i<<" ";
	}
	if(!flag)
		cout<<"-1";
	cout<<endl;
	return 0;
}


