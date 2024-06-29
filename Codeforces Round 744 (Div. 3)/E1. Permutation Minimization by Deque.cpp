#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int n;
    while(t--)
    {
    	cin>>n;
    	deque<int> deqs;
    	int x;
    	for(int i=0;i<n;i++)
    	{
    		cin>>x;
    		if(x>deqs.front())
    		{
    			deqs.push_back(x);
			}
			else
			{
				deqs.push_front(x);
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<deqs.at(i)<<" ";
		}
		cout<<endl;
	}
    
    return 0;
}
