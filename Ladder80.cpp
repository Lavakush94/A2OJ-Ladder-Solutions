#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,boy(0),girl(0);
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	in>>n>>m;
	if(n <= m)
	{
		for(int i = 1;i <= (n + m);i++)
		{
			if(i % 2 == 0 && boy != n)
			{
				out<<"B";
				boy++;
			}
			else
				out<<"G";
		}
	}
	else
	{
		for(int i = 1;i <= (n + m);i++)
		{
			if(i % 2 == 0 && girl != m)
			{
				out<<"G";
				girl++;
			}
			else
				out<<"B";
		}
	}
	out<<endl;
	out.close();
	return 0;
}
