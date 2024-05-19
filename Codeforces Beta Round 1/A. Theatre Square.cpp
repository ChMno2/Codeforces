#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int q,w;
    if(n%a)
    	q=n/a+1;
	else
		q=n/a;
	if(m%a)
		w=m/a+1;
	else
		w=m/a;
	
	cout<<q*w<<endl;
}
