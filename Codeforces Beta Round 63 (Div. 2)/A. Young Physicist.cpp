#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[3]={0},sum[3]={0};
 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>a[j];
            sum[j]+=a[j];
        }
    }
    
    bool bl=true;
    for(int i=0;i<3;i++)
    {
        if(sum[i]!=0)
            bl=false;
    }
    
    if(bl)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
