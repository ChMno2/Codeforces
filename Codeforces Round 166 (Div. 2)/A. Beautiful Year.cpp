#include <bits/stdc++.h>
using namespace std;
bool a[46342]; // sqrt(2147483647)==46342
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int s;
    cin >> s;
    int i;
    for (i = s + 1; i < 20000; i++)
    {
        int tmp = i;
        set<int> st;
        while (tmp > 0)
        {
            st.insert(tmp % 10);
            tmp /= 10;
        }
        if (st.size() == 4)
            break;
    }
    cout << i << '\n';
    return 0;
}
