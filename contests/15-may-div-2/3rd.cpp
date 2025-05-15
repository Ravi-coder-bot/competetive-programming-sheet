#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n ;
    cin >> n;

    vector<int> arr(n);
    for(int i =0 ; i < n ;i++) cin >> arr[i]; 

    vector<long long> ans;

    long long count = 1;
    ans.push_back(count);

    for(int i =1 ; i < n; i++){
        if(arr[i-1]==1 && arr[i]==1 && i!=1) ans.push_back(1);
        if(arr[i-1]==1 && arr[i]==2 && i==1) ans.push_back(1);
        else if(arr[i]>count+1){
            count++;
            ans.push_back(count);
        }
        else{
            ans.push_back(count);
        }
    }

    for(auto i : ans){
        cout << i << " ";
    }
    cout << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}