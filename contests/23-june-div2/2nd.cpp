#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;

    vector<int> nums(n);

    for(int i =0 ; i < n ; i++){
        cin >> nums[i]; 
    }
    

    if(n==2){
        int diff = abs(nums[1]-nums[0]);
        if(diff <= 1){
            cout << 0 << "\n";
            return;
        }
        else{
            cout << -1 << "\n";
            return;
        }
    }

    for(int i =0 ; i < n-1 ; i++){
        int diff = abs(nums[i+1]-nums[i]);
        if(diff <= 1){
            cout << 0 << "\n";
            return;
        } 
    }

    for(int i =0 ; i  < n ; i++){
        if(i-2>=0){
            int st = nums[i-2];
            int end = nums[i-1];
            int diff1 = abs(nums[i]-end);
            int diff2 = abs(nums[i]-st);

            if(diff1 <= 1 || diff2 <= 1){
                cout << 1  << "\n";
                return;
            }
        }

        if(i+2 < n){
            int end= nums[i+2];
            int st = nums[i+1];
            int diff1 = abs(nums[i]-end);
            int diff2 = abs(nums[i]-st);

            if(diff1 <= 1 || diff2 <= 1){
                cout << 1  << "\n";
                return;
            }

        }

   
    }


cout << -1 << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}