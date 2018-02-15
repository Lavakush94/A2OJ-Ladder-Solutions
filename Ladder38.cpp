#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,index;
	cin>>n;
	int *a = new int[n];
	int min = 9999999999;
	for(int i = 0;i < n;i++)
	{
		cin>>a[i];
		if(min > a[i])
		{
			min = a[i];
			index = i + 1;
		}
	}
	
	int c = 0;
	for(int i = 0;i < n;i++)
		if(a[i] == min)
			c++;
	if(c == 1)
		cout<<index<<endl;
	else
		cout<<"Still Rozdil\n";
	return 0;
	
}
