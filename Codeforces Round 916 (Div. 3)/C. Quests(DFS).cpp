#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n],b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>b[i];
		}
		int sum=0,mx=0,ans=0;
		for(int i=0;i<n;i++)
		{
			if(n<k)
			{
				sum+=a[i];
				mx=max(mx,b[i]);
				ans=max(ans,sum+(k-1-i)*mx);
			}
		}
		cout<<ans<<endl;
		
	}
}
