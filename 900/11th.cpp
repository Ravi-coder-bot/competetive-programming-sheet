#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    if (n == 1) {
        cout << arr[0] << endl;
        return;
    }
    
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i+1] % arr[i] == 0) {
            if (arr[i] == 1) {
                arr[i]++;
            } else {
                arr[i]++;
            }
        }
    }
    
    for (int i = 0; i < n - 1; ++i) {
        if (arr[i+1] % arr[i] == 0) {
            arr[i+1]++;
        }
    }
    
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}