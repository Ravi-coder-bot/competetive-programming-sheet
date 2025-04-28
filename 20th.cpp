#include <bits/stdc++.h>
using namespace std;

void solve (){
    int n;
    cin >> n ;
    vector<int> arr(n);
    for(int i=0; i< n;i++){
        cin>> arr[i];
    }

    vector<int> temp;

    for(int i =0 ;i < n;i++){
        temp.push_back(i+1);
    }
    
    for(int i=1; i < n;i++){
        if(arr[i]+temp[i] > arr[i+1]+temp[i+1]){

        }
    }

}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}