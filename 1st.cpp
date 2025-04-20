#include <bits/stdc++.h>
using namespace std;

bool isSorted(vector<int> arr){
    for(int i = 0; i < arr.size() - 1; i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}

void solve(){
    int n , k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    if(isSorted(arr)){
        cout << "YES" << endl;
        return;
    }

    if(n == 1){
        cout << "YES" << endl;
        return;
    }
    if(n > 1){
        if(k == 1){
            cout << "NO" << endl;
            return;
        }
        else{
            cout << "YES" << endl;
            return;
        }
    }
}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}  
