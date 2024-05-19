#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,a;
    cin>>s>>a;
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<s.size();i++)
    {
        a[i]=tolower(a[i]);
    }
    if(s<a)
        cout<<-1<<endl;
    else if(s>a)
        cout<<1<<endl;
    else
        cout<<0<<endl;
}
