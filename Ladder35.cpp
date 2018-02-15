#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a,b,c,l,m,n;
	cin>>a>>b>>c;
	l = sqrt((a * b) / c);
	m = sqrt((a * c) / b);
	n = sqrt((c * b) / a);
	cout<<(4 * (l + m + n))<<endl;
	return 0;
}
