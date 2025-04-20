#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
    vector<int> arr(n);
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    if(n==2){
        cout << "YES" << endl;
        return;
    }
    if(n%2==0){
        sort(arr.begin(),arr.end());
        for(int i = 1 ; i < n/2 ; i++){
            if(arr[i] != arr[i-1]){
                cout << "NO" << endl;
                return;
            }
        }
        for(int i = n-2 ; i >= n/2 ; i--){
            if(arr[i] != arr[i+1]){
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
        return;
    }
    else  if(n%2==1){
        sort(arr.begin(),arr.end());
        for(int i =1 ; i < (n-1)/2 ; i++){
            if(arr[i] != arr[i-1]){
                cout << "NO" << endl;
                return;
            } 
        }
        for(int i = n-2 ; i > (n-1)/2 ; i--){
            if(arr[i] != arr[i+1]){
                cout << "NO" << endl;
                return;
            }
        }
        if(arr[(n-1)/2] != arr[(n-1)/2-1] && arr[(n-1)/2] != arr[(n-1)/2+1]){
            cout << "NO" << endl;
            return;
        }
        cout << "YES" << endl;
        return;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
         solve();
    }
    return 0;
}