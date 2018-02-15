#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int> x,pair<int,int> y)
{
	if(x.first > y.first)
		return true;
	if(x.first == y.first && x.second < y.second)
		return true;
	return false;
}
int main()
{
	vector<pair<int,int> > vec;
	int n,k;
	cin>>n>>k;
	for(int i = 0;i < n;i++)
	{
		int a,b;
		cin>>a>>b;
		vec.push_back(pair<int,int>(a,b));
	}
	int res = 0;
	sort(vec.begin(),vec.end(),comparator);
	pair<int,int> p = vec[k - 1];
	//cout<<"kth value is :"<<p.first<<" "<<p.second<<endl; 
	//for(int i = 0;i < n;i++)
	//	cout<<vec[i].first<<" "<<vec[i].second<<endl;
	//cout<<"printed vector elements\n";
	for(int i = 0;i < n;i++)
	{
		if(vec[i].first == p.first && vec[i].second == p.second)
			res++;
	}
	cout<<res<<endl;
	//cout<<p.first<<" "<<p.second<<endl;
	return 0;
}
