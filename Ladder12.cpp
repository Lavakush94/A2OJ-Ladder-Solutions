#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	double sum = 0;
	cin>>n;
	int x = n;
	while(n--)
	{
		int a;
		cin>>a;
		sum = sum + a;
	}
	double res = sum / x;
	printf("%.12lf\n",res);
}
