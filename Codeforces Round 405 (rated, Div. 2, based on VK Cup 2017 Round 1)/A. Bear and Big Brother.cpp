#include<bits/stdc++.h>
using namespace std;

int main()
{
	int a,b;
	int aa[100];
	int bb[100];
	cin>>a>>b;
	for(int i=0;i<100;i++)
	{
		aa[i]=pow(3,i+1)*a;
		bb[i]=pow(2,i+1)*b;
	}
	for(int i=0;i<100;i++)
	{
		if(aa[i]>bb[i])
		{
			cout<<i+1<<endl;
			break;
		}
	}
	
}

