#include <bits/stdc++.h>
using namespace std;	
int main(int argc, char const *argv[])
{
	int i,j=0,t,ans=0,ans1=0;
	cin>>t;
	long long n;
	cin>>n;
	long long a[n],b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
		b[i]=a[i];				
	}
	sort(b,b+n);
	for(int i=0;i<n;i++)
	{
		if(b[0]==a[i])
		{
			ans1=i;
			ans=i;break;
		}
	}
	
	return 0;
}