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
		int Cmd=0;
		for(int i=0;i<n;i++)
		{
			for(int j=i;j<n;j++)
			{
				if(__gcd(a[i],a[j])==1)
					Cmd=max(Cmd,i+j+2);	
			}
			 
			
		} 
		if(Cmd==0)
			cout<<"-1"<<endl;
		else
			cout<<Cmd<<endl;
		
	}
}
