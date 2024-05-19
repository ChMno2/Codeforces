#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int >a;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0'&&s[i]<='9')
            a.push_back(s[i]-'0');
    }
    sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(i!=0)
            cout<<"+";
        cout<<a[i];
    }
    cout<<endl;
}
