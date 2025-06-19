#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));

    long long max_val = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
            max_val = max(max_val, a[i][j]);
        }
    }

    vector<pair<int, int>> max_positions;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == max_val){
                max_positions.push_back({i, j});
            }
        }
    }

    long long ans = 0 ;

    for(int r = 0; r < n; r++){
        for(int c = 0; c < m; c++){
            int current_max = INT_MIN;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    int val = a[i][j];
                    if(i == r || j == c) val--;
                    current_max = max(current_max, val);
                }
            }
            ans = min(ans, current_max);
        }
    }

    cout << ans << '\n';
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
