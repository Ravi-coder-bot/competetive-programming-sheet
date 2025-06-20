#include <bits/stdc++.h>
using namespace std;

void solve(){
     long long n, m;
     cin >> n >> m;

     vector<long long> infected(m);

     for(int i = 0; i < m; i++){
        cin >> infected[i];
     }
     sort(infected.begin(), infected.end());
     vector<long long> diff;
    
     if((infected[0] - 1) + (n - infected[m-1]) > 0){
         diff.push_back((infected[0] - 1) + (n - infected[m-1]));
     }
    
     for(int i = 0; i < m - 1; i++){
        if(infected[i+1] - infected[i] - 1 > 0){
           diff.push_back(infected[i+1] - infected[i] - 1);  
        } 
     }

     sort(diff.begin(), diff.end(), greater<long long>());

     int k = diff.size();
     long long saved = 0;
     long long days = 0;  

     for(int i = 0; i < k; i++){
        long long gap = diff[i];
        long long curr_gap = gap - days * 2;  
        
        if(curr_gap == 1 || curr_gap == 2){
            saved++;
            days++;
            break;  
        }
        else if(curr_gap > 2){
            saved += curr_gap - 1;  
            days += 2; 
        }
     }

     cout << n - saved << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}