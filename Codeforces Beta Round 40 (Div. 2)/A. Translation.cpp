#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,d;
    cin>>s>>d;
    bool bl=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=d[d.size()-1-i])
            bl=false;
    }
    if(bl)
        cout<<"YES"<<'\n';
    else
        cout<<"NO"<<'\n';
    
}
