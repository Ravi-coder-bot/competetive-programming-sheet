#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , n;
    cin >> a >> b >> n ;
    vector<int> arr(n) ;
    for(int i =0 ; i< n; i++){
        cin >> arr[i] ;
    }

    for(int i =0 ; i < n ; i++){
        if(arr[i]>=a){
            arr[i] = a-1;
        }
    }

    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i] ;
    }

    sum +=  b;

    cout << sum << endl;
}

int main() {
    int t;
    cin >> t ;
    while(t--){
        solve();
    }

    
    return 0;
}