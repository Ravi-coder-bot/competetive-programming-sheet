#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<long long> arr(n);
    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }

    int result = 0 ;
    for(int i =0; i < n-1; i ++){
        if((arr[i]%2==0 && arr[i+1]%2==0)||
           (arr[i]%2==1 && arr[i+1]%2==1)){
            result++;
           }
    }

    cout << result << endl;
}

int main() {
    int t;
    cin >>t;
    while(t--){
        solve();
    }
    
    return 0;
}