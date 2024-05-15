#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int s[3];
		for(int i=0;i<3;i++)
		{
			cin>>s[i];
		}
		

		sort(s,s+3);
		if(s[0]+s[1]==s[2])
			cout<<"YES"<<endl;
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
