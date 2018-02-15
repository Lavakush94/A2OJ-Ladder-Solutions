#include <bits/stdc++.h>
#define int long long
using namespace std;
void reverseSegment(int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];   
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }   
}    
signed main()
{
	int n,left = -1,right = -1,j;
	cin>>n;
	int *a = new int[n];
	for(int i = 0;i < n;i++)
		cin>>a[i];
	//if already sorted
	for(j = 0;j < n - 1;j++)
	{
		if(a[j] > a[j + 1])
			break;
	}
	if(j == n - 1)
	{
		cout<<"yes\n1 1\n";
		return 0;
	}
	
	for(int i = 0;i < n;i++)
	{
		if(a[i] > a[i + 1])
		{
			left = i;
			break;
		}
	}
	
	for(int i = n - 1;i >= 0;i--)
	{
		if(a[i] < a[i - 1])
		{
			right = i;
			break;
		}
	}
	reverseSegment(a,left,right);
	int i;
	for(i = 0;i < n - 1;i++)
	{
		if(a[i] > a[i + 1])
			break;
	}
	if(i == n - 1)
		cout<<"yes\n"<<left + 1<<" "<<right + 1<<endl;
	else
		cout<<"no\n";
	return 0;
}
