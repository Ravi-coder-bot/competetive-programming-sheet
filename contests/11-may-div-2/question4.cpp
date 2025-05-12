#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;

    vector<int> arr(n);
    for(int i =0 ; i < n; i++){
        cin >> arr[i];
    }

    vector<int> temp = arr;
    int i = n-1;
    int j = n-2;

    if(n%2==0){
        while(j>=0 && i>0){
            for(int k =0 ; k < n-1 ; k = k+2){
                arr[k]= temp[j];
                arr[k+1]= temp[i];
                j -=2 ;
                i -=2;
            }
        }
    }
    else{
        reverse(arr.begin(),arr.end());
    }

    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl;

}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve();

    }
    
    return 0;
}