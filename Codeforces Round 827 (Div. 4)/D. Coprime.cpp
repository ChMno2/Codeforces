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
		int Cmd=-1;
		vector<int> v(1001,0);
		for(int i=1;i<=n;i++)
		{
			int temp;
			cin>>temp;
			v[temp]=i;
		}
		for(int i=1;i<=1000;i++)
		{
			for(int j=1;j<=1000;j++)
			{
				if(__gcd(i,j)==1&&v[i]&&v[j]) 
					Cmd=max(Cmd,v[i]+v[j]);	
			}	 
		} 
		cout<<Cmd<<endl;
	}
}
