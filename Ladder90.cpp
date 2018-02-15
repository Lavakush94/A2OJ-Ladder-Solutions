#include <bits/stdc++.h>
#define int long long
#define MAX 100005
using namespace std;
int input[MAX],stones[MAX],min_stones[MAX];
signed main()
{
	int n,i;
	cin>>n;
	for(i = 1;i <= n;i++)
		cin>>input[i];
	stones[1] = input[1];
	for(i = 2;i <= n;i++)
		stones[i] = stones[i - 1] + input[i];
	sort(input + 1,input + n + 1);
	min_stones[1] = input[1];
	for(i = 2;i <= n;i++)
		min_stones[i] = min_stones[i - 1] + input[i];
	int op;
	cin>>op;
	while(op--)
	{
		int type,l,r;
		cin>>type;
		cin>>l>>r;
		switch(type)
		{
			case 1:
				cout<<stones[r] - stones[l - 1]<<endl;
				break;
			case 2:
				cout<<min_stones[r] - min_stones[l - 1]<<endl;
				break;
		}
	}
}
