#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k;
	cin>>n>>k;
	while(k>0)
	{

		if(n%10<=k)
		{
			k-=n%10;
			n-=n%10;
		}
		else
		{
			n-=k;
			break;
		}
		if(k==0)
			break;
		n/=10;
		k--;
	}
	cout<<n<<endl;
}
