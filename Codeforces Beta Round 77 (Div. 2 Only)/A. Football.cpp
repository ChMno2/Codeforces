#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int t=1,mx=0;
    
    for(int i=1;i<s.size();i++)
    {
        if(s[i]!=s[i-1])
        {
            mx=max(mx,t);
            t=1;
        }
        else
        {
            t++;
        }
    }
    mx=max(mx,t);
    if(mx>6)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
