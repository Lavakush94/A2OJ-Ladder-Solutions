#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	multimap<int,int> m;
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		pair<int,int> p;
		cin>>p.first>>p.second;
		m.insert(p);
	}
	int res = 0;
	bool right,left,low,up;
	multimap<int,int>::iterator it1,it2;
	for(it1 = m.begin(); it1 != m.end();it1++)
	{
		for(it2 = m.begin();it2 != m.end();it2++)
		{
			//cout<<"running inner loop\n";
			if(it1->first < it2->first && it1->second == it2->second)
				right = true;
			if(it1->first > it2->first && it1->second == it2->second)
				left = true;
			if(it1->first == it2->first && it1->second > it2->second)
				low = true;
			if(it1->first == it2->first && it1->second < it2->second)
				up = true;
		}
		if(right && left && low && up)
			res++;
		left = right = low = up = false;
	}
	cout<<res<<endl;
	return 0;
}
