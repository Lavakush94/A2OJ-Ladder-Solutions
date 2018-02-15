#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,k,n;
	cin>>a>>k>>n;
	for(int i = 0;i < 10;i++)
	{
		int x = a * 10 + i;
		if(x % k == 0)
		{
			//got = true;
			cout<<x;
			int p = n - 1;
			while(p--)
				cout<<"0";
			cout<<endl;
			return 0;
		}
	}
	cout<<"-1\n";
}
