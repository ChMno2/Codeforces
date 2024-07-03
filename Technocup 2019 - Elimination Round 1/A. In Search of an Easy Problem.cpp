#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	bool easy=true;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i])
		{
			easy=false;
			break;
		}	
	}	
	if(easy)
		cout<<"EASY"<<'\n';
	else
		cout<<"HARD"<<'\n'; 
}
