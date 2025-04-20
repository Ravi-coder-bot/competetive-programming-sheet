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
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    if(isSorted(arr)){
        cout << "YES" << endl;
        return;
    }

    vector<int> temp = arr;

    bool swapped = true;
    while(swapped){
        swapped = false;
        for(int i = 1 ; i < n-1 ; i++){
        if(temp[i]> temp[i-1] && temp[i]>temp[i+1]){
            swap(temp[i],temp[i+1]);
            swapped = true;
        }
    }
    }

    if(isSorted(temp)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
    solve();
    }
    
    return 0;
}