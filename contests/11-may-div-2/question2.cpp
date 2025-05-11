#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n;
    vector<int> arr(n);

    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i =0 ; i < n ; i++){
        if(arr[i]<0){
            arr[i] = -arr[i];
        }
    }

    int el = arr[0];
    sort(arr.begin(), arr.end());

    for(int i =0 ; i <= n/2 ; i++){
        if(arr[i]==el){
            cout << "YES" << endl;
            return ;
        }
    }

    cout << "NO" << endl;

}

int main() {

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}