#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int x = (k * l) / nl;
	int y = c * d;
	int z = p / np;
	int a = min(x,y);
	cout<<(min(a,z) / n)<<endl;
	return 0;
}
