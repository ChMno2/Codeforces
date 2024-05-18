/*
題目要求：t 表示有幾個case,a[n]表示階梯高度，k[n]代表人抬腳最大的高度，求最高可以到幾階
先預處理將1 2 1 5 改成 1 2 2 5，使用binary search找尋index

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,q;
        cin>>n>>q;
        long long int a[n],k[q],step[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        
        step[0]=a[0];
        
        for(int i=1;i<n;i++)
        {
            step[i]=step[i-1]+a[i];
        }
        
        long long int mx=0;
        for(int i=0;i<n;i++)
        {
            mx=max(a[i],mx);
            a[i]=mx;
        }


        for(int i=0;i<q;i++)
        {
            cin>>k[i];
        }
        
        for(int i=0;i<q;i++)
        {
            long long int sum=0;
            int it=upper_bound(a,a+n,k[i])-a-1;
            if(i!=0)
                cout<<" ";
            if(it<0)
                cout<<0;
            else
                cout<<step[it];
            
        }
        cout<<endl;
 
        
    }
    return 0;
}
