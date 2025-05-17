#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;

    vector<int> arr(n) ;
    for(int i =0  ; i < n ; i++){
        cin >> arr[i] ;
    }

    bool found = false ;

    if(arr[n-1]==0){
        found = true ;
    }

    for(int i =0 ; i < n-1 ; i++){

        if(arr[i]==0){
            found = true ;
        }

        if(arr[i]==arr[i+1] && arr[i]==0){
            cout << "YES" << "\n" ; 
            return ;
        }
    }

    if(!found){
        cout << "YES" << "\n" ;
        return ;
    }

    cout << "NO" << "\n" ;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}