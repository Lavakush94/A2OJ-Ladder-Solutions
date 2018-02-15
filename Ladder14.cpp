#include <bits/stdc++.h>
using namespace std;
int main()
{
	char s1[150],s2[150],s3[150];
	scanf("%s%s%s",s1,s2,s3);
	
	cout<<"fgfg";
	sort(s1,s1 + strlen(s1));
	sort(s3,s1 + strlen(s3));
	if(strcmp(s1,s3) == 0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
	return 0;
} 
