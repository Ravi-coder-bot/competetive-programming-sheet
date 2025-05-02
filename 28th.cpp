#include <bits/stdc++.h>
using namespace std;

bool comp(){


}

void solve(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }

    int sum = 0;

    for(int i=1; i <= n; i++){
        sum += arr[i-1];

        if(sum==arr[i]){
            sort(arr.begin(),arr.end(),comp);
        }
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