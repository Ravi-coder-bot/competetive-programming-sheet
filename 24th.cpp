#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    vector<int> arr(n);

    for(int i =0 ; i<n ; i++){
        cin >> arr[i];
    }

    int result = 0;
        for(int i =0; i <  256;i++){
            int total =0;
            for(int j =0; j<n ; j++){
                total ^= arr[j]^i; 
            }
            if(total==0){
                result = i;
                cout << result << endl;
                return;
            }
        }

    cout << -1  << endl;

}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}