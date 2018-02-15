#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)  
		return false;
    if (n <= 3)  
		return true;
    if (n%2 == 0 || n%3 == 0) 
		return false;
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
    return true;
}
int main()
{
	int n,m;
	bool flag = true;
	cin>>n>>m;
	for(int i = n + 1;i < m;i++)
	{
		if(isPrime(i))
		{
			flag = false;
			break;
		}
	}
	if(flag && isPrime(m))
		cout<<"YES\n";
	else
		cout<<"NO\n";
}
