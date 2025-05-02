#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0 ;i < n ; i++){
        cin >>  arr[i];
    }

    int  i=0;
    int j =n-1;
    int mul1 =arr[0];
    int mul2 =arr[n-1] ;
    while(j>i){
        if(mul1> mul2){
            j--;
            if(i<j){
                 mul2 *= arr[j];
            }
        }
        else if(mul2>mul1){
            i++;
            if(i<j){
                 mul1 *= arr[i];
            }
           
        }
        else if(mul1==mul2){
            i++;
            j--;
            if(i<j){
            mul1 *= arr[i];
            mul2 *= arr[j];
            }
           
        }
    }

    if(mul1 == mul2 && i<j){
        cout << i << endl;
        return;
     }
    else if(mul1 == mul2 && i>j){
        cout << i-1 << endl;
        return;
     }
     
     
     cout << -1 << endl;
    }

    

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}