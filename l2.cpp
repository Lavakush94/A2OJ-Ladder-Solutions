#include <bits/stdc++.h>
using namespace std;
int main()
{
	int x,i,j;
	for(i = 1;i < 6;i++)
	{
		for(j = 1;j < 6;j++)
		{
			cin>>x;
			if(x == 1)
				goto out;
		}
	}
	out:
		cout<<abs(3 - i) + abs(3 - j)<<endl;
	return 0;
}
