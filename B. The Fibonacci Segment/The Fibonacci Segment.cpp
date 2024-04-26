#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int max_length = 2;
    int current_length = 2;
	if(n==1)
		max_length=1;
		
    for (int i = 2; i < n; ++i) {
        if (a[i] == a[i-1] + a[i-2]) {
            // 如果當前數字等於前兩個數字的和，則將當前好子數列的長度加 1
            ++current_length;
        } else {
            // 否則更新最長好子數列的長度，並重置當前好子數列的長度為 2
            current_length = 2;
        }
        max_length = max(max_length, current_length);            
    }
    cout << max_length << endl;

    return 0;
}
