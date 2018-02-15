#include <bits/stdc++.h>
#define max 700000
using namespace std;
struct cards
{
	int i1;
	int i2;
	cards()
	{
		i1 = 0;
		i2 = 0;
	}
}a[max];
int main()
{
	//int frq[max] = {0};
	//ifstream cin;
	//ofstream cout;
	//cin.open("input.txt");
	//cout.open("output.txt");
	map<int,int> vp;
	pair<int,int> p;
	int n,count = 0;
	cin>>n;
	for(int i = 1;i <= 2 * n;i++)
	{
		int x;
		cin>>x;
		//frq[x]++;
		if(a[x].i1 == 0)
			a[x].i1 = i;
		else if(a[x].i1 != 0)
			a[x].i2 = i;
	}
	for(cards c : a)
	{
		if(c.i1 != 0 && c.i2 != 0)
		{
			p.first = c.i1;
			p.second = c.i2;
			vp.insert(p);
			count++;
		}
	}
	map<int,int>::iterator it;
	if(count == n)
	{
		for(it = vp.begin();it != vp.end();it++)
			cout<<it->first<<" "<<it->second<<endl;
	}
	else
		cout<<"-1\n";
	return 0;
}
