#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll t;
	cin>>t;
	int n,k;
	while(t--)
	{
		cin>>n>>k;
		ll ans=1;
		for(int i=0;i<k;i++)
		{
			ans*=n;
			ans%=1000000007;
        }
        cout<<ans<<'\n';   
    }
    return 0;
}
