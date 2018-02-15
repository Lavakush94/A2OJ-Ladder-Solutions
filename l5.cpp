#include <bits/stdc++.h>
using namespace std;
int main()
{
	int y;
	cin>>y;
	for(int i = y + 1;y <= 9000;i++)
	{
		int a,b,c,d;
		a = i / 1000;
		b = (i / 100) % 10;
		c = (i / 10) % 10;
		d = i % 10;
		if(a != b && a != c && a != d && b != c && b != d && c != d)
		{
			cout<<i<<endl;
			break;
		}
	}
	return 0;
}
