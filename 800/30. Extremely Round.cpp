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

// Function to check if number has exactly one non-zero digit
bool check(int x) {
    string s = to_string(x);
    int cnt = 0;
    for (char c : s) {
        if (c != '0') cnt++;
    }
    return cnt == 1;
}

void solve(const vector<int>& a) {
    int n;
    cin >> n;
    int ans = 0;
    for (int x : a) {
        if (x <= n) ans++;
        else break; // optimization since 'a' is sorted
    }
    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // Precompute all "round numbers" (only one non-zero digit)
    vector<int> a;
    for (int i = 1; i < 1000000; ++i) {
        if (check(i)) {
            a.push_back(i);
        }
    }

    int t;
    cin >> t;
    while (t--) {
        solve(a);
    }
    return 0;
}
    