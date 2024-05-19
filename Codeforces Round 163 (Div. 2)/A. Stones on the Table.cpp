#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int n,sum=0;
	string s;
	cin>>n>>s;
	while(n--)
	{
		if(s[n]==s[n-1])
			sum++;
	}
	cout<<sum<<endl;
}
