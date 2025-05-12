#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >>  n;

    vector<int> arr(n);
    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }

    int count = 0;
    int maxCount = 0;

    for(int i =0 ; i <n; i++){
        count =abs(arr[i]-(i+1));
        maxCount = __gcd(maxCount, count);
    }

    cout << maxCount << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}