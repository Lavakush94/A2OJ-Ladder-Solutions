#include <bits/stdc++.h>
#define max 101
int p[max];
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n % 2 != 0)
		cout<<"-1\n";
	else
	{
		for(int i = 1;i < max + 1;i++)
			p[i] = i;
		for(int i = 1;2 * i <= n;i++)
		{
			int t = p[2 * i - 1];
			p[2 * i - 1] = p[2 * i];
			p[2 * i] = t;
		}
		for(int i = 1;i <= n;i++)
			cout<<p[i]<<" ";
		cout<<endl;
	}
	
}
