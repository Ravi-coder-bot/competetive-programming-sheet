#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin  >> n ;

    vector<int> arr(n);
    for(int i =0 ; i < n; i++){
        cin >> arr[i];
    }

    int count = 0;
    for(int i =0 ; i < n ; i++){
        if(arr[i]==2){
            count ++;
        }
    }
    if(count == 0){
        cout << 1 << endl;
        return;
    }

    if(count%2==0){
        int left = count/2;
        int  k =0;
       while(left>0){
        if(arr[k]==2){
            left--; 
        }
        k++;  
       }
       cout << k << endl;
       return ;
    }
    else{
        cout << -1 << endl;
        return ;
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