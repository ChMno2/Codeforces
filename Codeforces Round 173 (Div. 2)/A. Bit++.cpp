#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin>>n;
    int sum=0;
	while(n--)
    {
    	string s;
    	cin>>s;
    	sort(s.begin(),s.end());
    	if(s[0]=='+')
    		sum++;
    	else
    		sum--;
	}
	cout<<sum<<endl;
}
