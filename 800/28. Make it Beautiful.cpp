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
#define REP(i, a, b) for (int i = a; i < b; i++)
const int MOD = 1e9 + 7;
 
void solve() {
    int n;
    cin>> n;
    vector<int>a(n);
    int total_two=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
    }
    if (a[0] == a[n - 1]) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << a[n - 1] << " ";            
        for (int i = 0; i < n - 1; ++i) {
             cout << a[i] << " ";
        }
        cout << endl;
    }
}
 
int main() {
ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    //solve();
    return 0;
}