#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int a[n];
	for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	k=a[k-1];
	int i;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>=k&&a[i]!=0)
			break;
	}
	if(i<0)
		cout<<0<<endl;
	else
		cout<<i+1<<endl;
}

 
