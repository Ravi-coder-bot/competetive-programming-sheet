#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>> n;
    vector<int> arr(n);

    for(int i=0;i<n ;i++){
        cin >> arr[i];
    }

    int sum1 = arr[0];
    int sum2 = arr[1];


    for(int i=2; i<n ;i++){
        if(sum1%2==0 && sum2%2==0){
                sum1 += arr[i];

        }
        else if(sum1%2==1 && sum2%2==0){
            if(arr[i]%2==0){
                sum2 += arr[i];
            }
            else{
                sum1 += arr[i];
            }
        }
        else if(sum1%2==0 && sum2%2==1){
            if(arr[i]==0){
                sum1 += arr[i];
            }
            else{
                sum2 += arr[i];
            }

        }
        else{
            sum2 += arr[i];
        }
    }

    if(sum1%2==sum2%2){
        cout << "YES"<< endl;
    }
    else{
        cout << "NO" << endl;
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