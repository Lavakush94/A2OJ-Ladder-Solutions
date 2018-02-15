#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string x;
	string team[n];
	for(int i = 0;i < n;i++)
		cin>>team[i];
	int t1(0),t2(0);
	string s1 = team[0];
	for(int i = 0;i < n;i++)
	{
		if(s1.compare(team[i]) == 0)
			t1++;
		else 
		{
			x = team[i];
			t2++;
		}
	}
	//cout<<t1<<" "<<t2<<endl;
	if(t1 > t2)
		cout<<s1<<endl;
	else
		cout<<x<<endl;
}
