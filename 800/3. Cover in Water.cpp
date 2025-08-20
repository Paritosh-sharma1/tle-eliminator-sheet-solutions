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
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='#'){
            cnt=0;
        }
        else{
            cnt++;
            if(cnt>=3){
                cout<<2<<endl;
                return;
            }
        }
    }
    // cout<<1<<endl;
    // return;
    int cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt1++;
        }
    }
    cout<<cnt1<<endl;
    return;
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
 