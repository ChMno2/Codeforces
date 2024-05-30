#include <bits/stdc++.h>
using namespace std;
bool a[46342]; // sqrt(2147483647)==46342
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool bl = true;
        int dig = 1, dd;
        if ((s[0] >= 'a' && s[0] <= 'z'))
        {
            dig = 0;
        }
        else
        {
            dig = 1;
        }
 
        if ((s[0] >= 'a' && s[0] <= 'z') || s[0] >= '0' && s[0] <= '9')
        {
        }
        else
        {
            bl = false;
            break;
        }
        for (int i = 1; i < n; i++)
        {
            dd = dig;
            if ((s[i - 1] > s[i]) && (dd == dig))
            {
                bl = false;
            }
            if ((s[i] >= 'a' && s[i] <= 'z') || s[i] >= '0' && s[i] <= '9')
            {
            }
            else
            {
                bl = false;
                break;
            }
            if ((s[i] >= 'a' && s[i] <= 'z'))
            {
                dig = 0;
            }
            else
            {
                dig = 1;
            }
            if (dig == 1 && dd == 0)
            {
                bl = false;
            }
            
            //cout << s[i - 1] << s[i] << " " << dig << dd << endl;
        }
        if (bl == false)
            cout << "NO" << '\n';
        else
            cout << "YES" << '\n';
    }
    return 0;
}
