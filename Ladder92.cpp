#include <bits/stdc++.h>
using namespace std;
//bool comp(int i,int j)
//{
//	if(i < j)
//		return true;
//	return false;
//}
int ans[100005];
int main()
{
	int n,m;
	cin>>n>>m;
	int *a = new int[n];
	//vector<int> ans;
	set<int> s;
	for(int i = 0;i < n;i++)
		cin>>a[i];
	for(int i = n - 1;i > -1;i--)
	{
		s.insert(a[i]);
		ans[i] = s.size();
	}
	//sort(ans.begin(),ans.end(),comp);
	for(int i = 0;i < m;i++)
	{
		int x;
		cin>>x;
		x = x - 1;
		cout<<ans[x]<<endl;
	}
	return 0;
}
