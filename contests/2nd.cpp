#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n ;
    vector<int> arr(n);
    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
    }
    vector<int > temp = arr;

    sort(temp.begin(),temp.end());
    cout << temp[n-1] << " ";
    long long sum =temp[n-1] ;
    sum = sum + arr[n-1];


    for(int i=n-2; i >= 0 ; i--){
        sum += temp[i];
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}