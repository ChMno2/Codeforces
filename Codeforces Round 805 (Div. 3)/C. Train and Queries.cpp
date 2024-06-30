#include<bits/stdc++.h>
 
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	int n,k;
	while(t--)
	{		
		cin>>n>>k;
		map<int,int>mp,ed;
 
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(mp[x]==0)
				mp[x]=i;
			ed[x]=i;
		}
		while(k--)
		{
			long long x,y;
			cin>>x>>y;
			if(mp[x]==0||mp[y]==0)
			{
				cout<<"No"<<'\n';				
			}
			else
			{
				if(mp[x]<ed[y])
					cout<<"Yes"<<'\n';
				else
					cout<<"No"<<'\n';	
			}
		}
		
		
	}
} 
