#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;

    vector<int> a(n), b(n) , c(n); 

    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    for (int i = 0; i < n; i++) cin >> c[i];

    vector<pair<int,int>> topA, topB, topC ;

    for(int i =0 ; i < n ; i++){
        topA.push_back({a[i], i});
        topB.push_back({b[i], i});
        topC.push_back({c[i], i}); 
    }

    sort(topA.begin(), topA.end());
    sort(topB.begin(), topB.end());
    sort(topC.begin(), topC.end());

    int maxSum = 0 ;
    int sum = 0 ;

    for(int i = n-1 ; i >= n-3 ; i--){
        for(int j = n-1 ; j>=n-3 ; j--){
            for(int k = n-1 ; k >= n-3 ; k--){
                int idx1 = topA[i].second;
                int idx2 = topB[j].second;
                int idx3 = topC[k].second;


                if(idx1!=idx2 && idx2!=idx3 && idx1!=idx3){
                    sum = topA[i].first + topB[j].first + topC[k].first;
                    maxSum = max(maxSum, sum);
                }
            }
        }
    }

    cout << maxSum << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin  >> t ; 
    while(t--){
        solve();
    }
    
    return 0;
}