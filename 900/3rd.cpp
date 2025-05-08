#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n , k ,x;
    cin >> n >> k >> x;

    long long minSum = 1LL*k*(k+1)/2;
    long long maxSum = 1LL*k*(2*n-k+1)/2;
    
    if(x>=minSum && x<=maxSum ){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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