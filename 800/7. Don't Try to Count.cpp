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
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;

    for (int i = 0; i < 6; i++) {
        if (x.find(s) != string::npos) {
            cout << i << endl;
            return;
        }
        x += x;  // doubling the string
    }
    cout << -1 << endl;
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
