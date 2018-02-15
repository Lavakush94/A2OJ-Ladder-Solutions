#include <bits/stdc++.h>
#define max 1000000
using namespace std;

int main()
{
	int e[max];
	int n;
	cin>>n;
	int a;
	for(int i = 1;i <= n;i++)
	{
		cin>>a;
		e[a] = i;
	}
	long long q,res_v = 0,res_p = 0;
	cin>>q;
	for(int i = 0;i < q;i++)
	{
		int x;
		cin>>x;
		res_v += e[x];
		res_p += (n + 1) - e[x]; 
	}
	cout<<res_v<<" "<<res_p<<endl;
	return 0;
}
