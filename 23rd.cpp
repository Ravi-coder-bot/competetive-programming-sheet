#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c,d;
    cin >> a >> b>> c>> d ;

    long long diffX = c-a;
    long long diffY = d-b;

    long long difference = diffY-diffX;
    if (diffY < 0) {
        cout << -1 << endl;
        return;
    }
    long long newX = a + diffY;


    long long remaningX = newX - c;
    if (remaningX < 0) {
        cout << -1 << endl;
        return;
    }
    
        cout << diffY+remaningX << endl;
}

int main() {
    long long t;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}