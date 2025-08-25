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
    ll n, k;
    cin >> n >> k;

    bool ok = false;
    for (int x = 0; x < 2; x++) {
        if (n - x * k >= 0 && (n - x * k) % 2 == 0) {
            ok = true;
            break;
        }
    }

    if (ok) cout << "YES" << endl;
    else cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
