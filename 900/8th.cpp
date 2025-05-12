#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;

    int maxLen = 0;
    int curr = 0;

    for(int i = 0; i < n; ++i){
        if(i == 0 || s[i] == s[i-1]) {
            curr++;
        } else {
            curr = 1;
        }
        maxLen = max(maxLen, curr);
    }

    cout << maxLen + 1 << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
