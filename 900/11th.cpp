#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;

    vector<int> arr(n);

    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }

    for(int i =0 ; i < n-1 ; i++){
        if(arr[i+1]%arr[i]==0){
            arr[i]= arr[i+1];
            arr[i+1] += 1;
        }
        else{
            continue;
        }
    }

    for(auto i : arr){
        cout << i << " ";
    }
   cout <<  endl;

}

int main() {
    int t;
    while(t--){
        solve();
    }
    
    return 0;
}