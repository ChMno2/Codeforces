#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a;
		char b[n][n]={0};
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>b[i][j];
			}
		}
		for(int i=0;i<n;i+=k)
		{
			for(int j=0;j<n;j+=k)
			{
				cout<<b[i][j];
			}
			cout<<endl;
		}
		
	}
} 
