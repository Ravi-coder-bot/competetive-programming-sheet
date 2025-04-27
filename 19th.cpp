#include <bits/stdc++.h>
using namespace std;

bool mulCheck(vector<int> arr){
    int n = arr.size();
    int mul = 1;
    for(int i = 0 ; i < n-1 ; i++){
        mul = mul*arr[i];
    }
    if(mul==1){
        return true;
    }
    return false;
}

void solve(){
    int n ;
    cin >> n;
    vector <int> arr(n) ;
    int diff =0;

    for(int i =0; i< n ; i++){
        cin >> arr[i];
    }
    
    int positive = 0;
    int negative = 0;
    for(int i=0 ;  i < n;i++){
        if(arr[i]==1){
            positive++;
        }
        else{
            negative++;
        }
    }

    diff = negative- positive;

    if(diff<=0 && mulCheck(arr)){
        cout << 0 << endl;
        return;
    }
    else if(diff<=0 && !mulCheck(arr)){
        cout << 1 << endl;
        return;
    }

    if(diff==1 || diff==2 ){
        if(mulCheck(arr)){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
        
        return;
    }
    else if(diff%2==0 && diff!=2){
        if(mulCheck(arr)){
             cout << diff-2 << endl;
        }
        else{
            cout << diff-1 << endl;
        }
       
        return;
    }
    else if(diff%2==1 && diff!=1){
        if(mulCheck(arr)){
            cout << (diff+1)/2 << endl;
        }
        else{
            cout << (diff+3)/2 << endl;
        }
        
        return ;
    }
}

int main() {
    int t;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}