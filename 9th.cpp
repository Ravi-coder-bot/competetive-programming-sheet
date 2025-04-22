#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i =0; i< n-1 ; i++){
        cin >>  arr[i];
    }
    int count  = 0;

    for(int i =0; i< n-1 ; i++){
         count = count + arr[i];
    }
    cout << -count << endl;
}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}