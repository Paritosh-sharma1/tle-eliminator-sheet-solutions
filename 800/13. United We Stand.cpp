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
    cin >>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    if(arr[0]==arr[n-1]){
        cout<<-1<<endl;
        return;
    }
    else{
        int it=0;
        while(arr[it]==arr[0])it++;
        cout<<it<<" "<<n-it<<endl;
        for(int i=0;i<it;i++) cout<<arr[i]<<" ";
            cout<<endl;
        for(int j=it;j<n;j++) cout<<arr[j]<<" ";
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