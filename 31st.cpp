#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, a ,b;
    cin >> n >> a >> b;

    int sum = a + b ;

    if (n==a && a==b){
            cout << "YES" << endl;
    }
    else if(sum+2<=n){
            cout << "YES" << endl;
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