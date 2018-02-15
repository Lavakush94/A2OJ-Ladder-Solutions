#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[4][4] = {0};
	for(int i = 0;i < 4;i++)
	{
		for(int j = 0;j < 4;j++)
		{
			char temp;
			cin>>temp;
			if(temp == '.')
				a[i][j] = 1;
		}
	}
	bool flag = false;
	for(int i = 0;i < 3;i++)
	{
		for(int j = 0;j < 3;j++)
		{
			int sum = a[i][j] + a[i + 1][j] + a[i + 1][j + 1] + a[i][j + 1];
			if(sum != 2)
			{
				flag = true;
				break;
			}
		}
	}
	if(flag)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
