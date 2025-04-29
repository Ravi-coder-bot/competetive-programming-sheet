#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin  >> n ;
    vector<int> arr(n);

    for(int i=0; i < n ; i++){
        cin >> arr[i];
    }

    int prevLength = 0;
    int currLength = 0;

    for(int  i =0; i < n; i++){
        if(arr[i] == 0){
            currLength++;
        }
        else{
            prevLength = max(prevLength, currLength);
            currLength = 0;
        }
    }

    prevLength = max(prevLength, currLength);
    cout << prevLength << endl;
}
int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}