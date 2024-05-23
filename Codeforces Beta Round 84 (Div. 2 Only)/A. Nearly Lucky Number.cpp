#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=0,mx=0;
    
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='4'||s[i]=='7')
            t++;
    }
    
    bool bl=true;
    if(t==0)
        bl=false;
    while(t>0)
    {
        if(!((t%10)==7||(t%10)==4))
            bl=false;
        t/=10;
    }
    if(bl)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}
