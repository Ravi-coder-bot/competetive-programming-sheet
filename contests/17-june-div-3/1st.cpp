#include <bits/stdc++.h>
using namespace std;

void solve(){
    int  n;
    int s;
    cin >> n >> s;

    vector<int> pos(n);

    for(int i =0 ; i < n ; i++){
        cin >> pos[i]; 
    }


    sort(pos.begin(),pos.end());
    int mini = pos[0];
    int maxi = pos[n-1];

    int result = min(abs(s-mini),abs(s-maxi)) + (maxi-mini);

    cout << result << "\n";
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}