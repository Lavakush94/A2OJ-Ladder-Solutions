#include <bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
	int a[5][5];
	ll sum = 0,min_sum = -999999;
	int b[5];
	for(int i = 0;i < 5;i++)
	{
		b[i] = i;
		for(int j = 0;j < 5;j++)
			cin>>a[i][j];
	}
	do
	{
		//for(int i = 0;i < 5;i++)
		//	cout<<b[i]<<" ";
		sum = a[b[0]][b[1]] + a[b[1]][b[0]];
		sum += a[b[2]][b[3]] + a[b[3]][b[2]];
		
		sum += a[b[1]][b[2]] + a[b[2]][b[1]];
		sum += a[b[4]][b[3]] + a[b[3]][b[4]];
		
		sum += a[b[2]][b[3]] + a[b[3]][b[2]];
		
		sum += a[b[3]][b[4]] + a[b[4]][b[3]];
		//cout<<"Result for current permutation "<<sum<<endl;
		if(sum > min_sum)
			min_sum = sum;
	}while(next_permutation(b,b + 5));
	cout<<min_sum<<endl;
	return 0;
}
