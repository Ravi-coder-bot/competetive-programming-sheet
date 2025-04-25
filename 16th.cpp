#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i=0; i< n; i++){
        cin >> arr[i];
    }

    bool sorted = true;
    for(int i=1; i< n; i++){
        if(arr[i-1] > arr[i]){
            sorted = false;
            break;
        }
    }

    if(!sorted){
        cout << "0" << endl;
        return;
    }

    int diff = INT_MAX;

    for(int i =1; i< n; i++){
        diff = min(diff, arr[i] - arr[i-1]);
    }
    int result = 0;

    if(diff%2==0){ 
        result = diff/2+1;
    }
    else{
        result = (diff+1)/2;
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}