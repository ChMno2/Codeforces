#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,n,w;
	cin>>k>>n>>w;
	int sum=0;
	for(int i=1;i<=w;i++)
	{
		sum+=i;
	}
	if(k*sum>n)
		cout<<k*sum-n<<endl;
	else
		cout<<0<<endl;
}
