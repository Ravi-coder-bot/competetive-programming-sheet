#include <bits/stdc++.h>
using namespace std;

bool checker(vector<int> arr){
    int sum = arr[0];
    for(int i =1 ; i < arr.size(); i++){
        if(sum == arr[i]){
            return false;
        }
        sum += arr[i];
    }
    return true;
}

void solve(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }
    if(checker(arr)){
        cout << "YES" << endl;
        for(auto i : arr){
            cout << i << " ";  
          }
        cout << endl;
        return;
    }

    vector<int> temp = arr;
    sort(temp.begin(), temp.end() );

    if(temp[0] == temp.back()){
        cout << "NO" << endl;
        return;
    }

    vector<int> temp2 = arr;
    arr[0] = temp2[n-1];
    for(int i=1 ; i < n ; i++){
        arr[i] = temp2[i-1]; 
    }


    if(checker(arr)){
        cout << "YES" << endl;
        for(auto i : arr){
            cout << i << " ";  
          }
        cout << endl;
        return;
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