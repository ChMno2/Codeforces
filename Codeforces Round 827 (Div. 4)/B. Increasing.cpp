#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		bool l=true;
		for(int i=0;i<n-1;i++)
		{
			if(a[i]==a[i+1])
				l=false;
		}
		if(l)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
