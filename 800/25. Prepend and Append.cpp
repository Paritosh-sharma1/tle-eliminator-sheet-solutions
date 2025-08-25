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
 
int gcd (int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd (b, a % b);
}
void solve() {
    int n;
    cin >>n;
    string s;
    cin>>s;
    int i=0,j=n-1;
    int cnt=0;
    while(i<=j){
        if(s[i]!=s[j]){
            cnt++;
            i++;j--;
        }
        else{
            break;
        }
    }
    cout<<n-2*cnt<<endl;
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