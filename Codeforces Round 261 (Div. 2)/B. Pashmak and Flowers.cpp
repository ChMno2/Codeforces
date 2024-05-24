#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int b[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(b, b + n);
    long long int s = 0, m = 0;
    for (long long int i = 0; i < n; i++)
    {
        if (b[i] == b[0])
            s++;
        if (b[i] == b[n - 1])
            m++;
    }
    cout << b[n - 1] - b[0] << " ";
    if (b[n - 1] == b[0])
        cout << s * (s - 1)/2 << '\n';
    else
        cout << s * m << '\n';
}
