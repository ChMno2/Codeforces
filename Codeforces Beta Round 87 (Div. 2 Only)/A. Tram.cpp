#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,mx=0;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        sum-=a;
        sum+=b;
        mx=max(mx,sum);
 
    }
    cout<<mx<<endl;
    
}
