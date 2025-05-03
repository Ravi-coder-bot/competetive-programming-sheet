#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin >> n;
    if(n < 10){
        cout << n << endl;
        return ;
    }
    int length = 0 ;
    long long  k = n ;
    while(k>0){
        length++;
        k = k/10;
    }
    int count = 9*(length-1);
    while(n>=10){
        n = n/10;
    }
    count = count + n;
    cout << count << endl;

}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}