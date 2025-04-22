#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i< n;i++){
        cin >> arr[i];
    }

    for(int i=0; i< n;i++){
       if(arr[i] < 0){
         arr[i] = -arr[i];
       }
    }
    
    int result = INT_MAX;

    for(int i=0; i< n;i++){
        if(arr[i]-0 < result){
            result = arr[i];
        }
    }
    cout << result;
    return 0;
}