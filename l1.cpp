#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sumA,sumB,sumC;
	sumA = sumB = sumC = 0;
	while(n--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		sumA += a;
		sumB += b;
		sumC += c;
	}
	if(sumA == 0 && sumB == 0 && sumC == 0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	
}
