#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long  n , k ;
    cin >> n >> k;

    vector<long long> nums(n*k);

    for(int i =0 ; i < n*k ; i++){
        cin >> nums[i];
    }

    sort(nums.begin(),nums.end());

    long long  skip = n/2+1 ;
    long long  sum =0 ;

    long long i = n*k;

    while(k--){
        i -= skip;
        sum += nums[i];
    }
    cout << sum << "\n";

}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int  t;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}