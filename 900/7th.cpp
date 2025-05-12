#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k ;
    cin >> n >> k ;
    vector<int> arr(n) ;

    for(int i = 0 ; i < n ; i++){
        cin >> arr[i] ;
    }

    sort(arr.begin(), arr.end());

    int len = 1;
    int maxlenght = 1;
    for(int i =1; i < n ; i++){
        if(arr[i]-arr[i-1]<=k){
            len++;
        }
        else{
            maxlenght = max(maxlenght, len); 
            len = 1;
        }
    }

    maxlenght = max(maxlenght, len);

    int result =  n-maxlenght;

    cout << result << endl;

}

int main() {
    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}