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
    vector<int>arr(n);
    int total_two=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==2){
            total_two++;
        }
    }
    int left_two=0,right_two=0;
    for(int k=0;k<n;k++){
        if(arr[k]==2){
            left_two++;
        }
        right_two=total_two-left_two;
        if(right_two==left_two){
            cout<< k+1<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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
 