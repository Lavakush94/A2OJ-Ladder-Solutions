#include <bits/stdc++.h>
using namespace std;
int main()
{
	set<int> x;
	for(int i = 0;i < 4;i++)
	{
		int a;
		cin>>a;
		x.insert(a);
	}
	cout<<(4 - x.size())<<endl;
}
