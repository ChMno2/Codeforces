#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        
        long long count = 0;
        
        for (int a = 1; a <= min(x, n); a++) {
            for (int b = 1; b <= min(x - a, n / a); b++) {
                for (int c = 1; c <= min(x - a - b, n / (a + b)); c++) {
                    if (a + b + c <= x && a * b + a * c + b * c <= n) {
                        count++;
                    }
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
