#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l1, b1, l2, b2, l3, b3;
    cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
    
    
    if (l1 + l2 + l3 == b1) {
        cout << "YES" << endl;
        return;
    }
    
    if (l1 == b1 + b2 + b3) {
        cout << "YES" << endl;
        return;
    }
    
    
    if (l1 + l2 == b1 + b3 && l3 <= l1 + l2) {
        cout << "YES" << endl;
        return;
    }
    

    if (l1 + l3 == b1 + b2 && l2 <= l1 + l3) {
        cout << "YES" << endl;
        return;
    }
    
    if (l2 + l3 == b2 + b1 && l1 <= l2 + l3) {
        cout << "YES" << endl;
        return;
    }
    
    
    if (l1 + l3 == b1 + b2 && b3 <= b1 + b2) {
        cout << "YES" << endl;
        return;
    }
    
 
    if (l1 + l2 == b1 + b3 && b2 <= b1 + b3) {
        cout << "YES" << endl;
        return;
    }
    
   
    if (l2 + l1 == b2 + b3 && b1 <= b2 + b3) {
        cout << "YES" << endl;
        return;
    }
    
    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}