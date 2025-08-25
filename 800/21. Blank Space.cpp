/*
    Author : Paritosh Sharma    
*/
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long double ld;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for (int i = a; i <= b; i++)
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    if (n == 1) {
        // Output 1 if the only element is 0, otherwise 0
        cout << (arr[0] == 0 ? 1 : 0) << endl;
        return;
    }
 
    int maxCount = 0;
    int count = 0;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            count++;
        } else {
            maxCount = max(maxCount, count);
            count = 0;
        }
    }
 
    // Update maxCount for the last sequence of 0s
    maxCount = max(maxCount, count);
 
    cout << maxCount << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}