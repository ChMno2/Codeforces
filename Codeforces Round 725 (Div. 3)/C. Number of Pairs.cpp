#include <bits/stdc++.h>
 
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
 
        long long ans = 0;
        sort(a + 1, a + n + 1);
        for (int i = 1; i <= n; i++)
        {
            int L = lower_bound(a + 1 + i, a + n + 1, l - a[i]) - a;
            int R = upper_bound(a + 1 + i, a + n + 1, r - a[i]) - a;
 
            ans += R - L;
        }
        cout << ans << endl;
    }
}
