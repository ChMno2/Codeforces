#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		cin.ignore();		
		char rc[8][8];
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				cin>>rc[i][j];
			}
		}
		int r=0;
		bool l=false;
		for(int i=0;i<8;i++)
		{
			for(int j=0;j<8;j++)
			{
				if(rc[i][j]=='R')
					r++;	
			}
			if(r==8)
			{
				cout<<"R"<<endl;
				l=true;
				break;
			}
			r=0;
		}
		if(l==false)
		{
			cout<<"B"<<endl;
		}
		
		
	}
}
