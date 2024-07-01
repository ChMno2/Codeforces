#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);	
	ll n;
	cin>>n;
	ll a[n],b[n],f[n],g[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	f[0]=a[0];
	g[0]=b[0];
	for(int i=1;i<n;i++){
		g[i]=max(g[i-1],f[i-1]+b[i]);
		f[i]=max(g[i-1]+a[i],f[i-1]);
	} 
	ll ans=max(g[n-1],f[n-1]);
	cout<<ans<<'\n';
} 
