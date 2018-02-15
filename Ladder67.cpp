#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    int r1 = 1,r2 = 2,r3 = 3,r4 = 4,r5 = 6;
    bool a1,a2,a3,flag;
    a1 = a2 = a3 = false;
    flag = true;
    cin>>n;
    int a[8] = {0};
    int c[8] = {0};
    for(int i = 0;i < n;i++)
    {
        int b;
        cin>>b;
        if(b == 5 || b == 7)
			flag = false;
        a[b]++;
        c[b]++;
    }
    //cout<<flag;
    while(c[1] > 0 && c[2] > 0 && c[4] > 0 && flag)
    {  
        a1 = true;
        c[1]--;c[2]--;c[4]--;
    }
    while(c[1] > 0 && c[2] > 0 && c[6] > 0 && flag)
    {
        //cout<<r1<<" "<<r2<<" "<<r5<<endl;
        a2 = true;
        c[1]--;c[2]--;c[6]--;
    }
    while(c[1] > 0 && c[3] > 0 && c[6] > 0 && flag)
    {
        //cout<<r1<<" "<<r3<<" "<<r5<<endl;
        a3 = true;
        c[1]--;c[3]--;c[6]--;
    }
    if(!all_of(c,c + 8, [](int i){return i == 0;}))
	{
		cout<<"-1\n";
		return 0;
	}
    
    while(a[1] > 0 && a[2] > 0 && a[4] > 0 && flag)
    {
        cout<<r1<<" "<<r2<<" "<<r4<<endl;
        a1 = true;
        a[1]--;a[2]--;a[4]--;
    }
    while(a[1] > 0 && a[2] > 0 && a[6] > 0 && flag)
    {
        cout<<r1<<" "<<r2<<" "<<r5<<endl;
        a2 = true;
        a[1]--;a[2]--;a[6]--;
    }
    while(a[1] > 0 && a[3] > 0 && a[6] > 0 && flag)
    {
        cout<<r1<<" "<<r3<<" "<<r5<<endl;
        a3 = true;
        a[1]--;a[3]--;a[6]--;
    }
    if(!a1 && !a2 && !a3)
        cout<<"-1\n";
	return 0;
}
