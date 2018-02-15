#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
	int x,y,n;
	cin>>x>>y>>n;
	n--;
	int res[6] = {x,y,y - x,-x,-y,x - y};
	int ans = ((res[n % 6] % 1000000007) + 1000000007) % 1000000007;
	cout<<ans<<endl;
	return 0;
}
