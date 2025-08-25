#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t; 
    cin >> t;
 
    while (t--) {
        int n; 
        cin >> n;
 
        vector<int> a(n);
        int sum = 0, negativeCount = 0;
 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            sum += a[i];
            if (a[i] == -1) {
                negativeCount++;
            }
        }
        int operations = 0;
        while (sum < 0) {
            sum += 2;
            negativeCount--;
            operations++;
        }
        if (negativeCount % 2 == 1) {
            operations++;
        }
 
        cout << operations << endl;
    }
 
    return 0;
}