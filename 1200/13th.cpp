#include <bits/stdc++.h>
using namespace std;

void solve(){
     long long n , m;
     cin >> n >>  m;

     vector<long long> infected(m);

     for(int i =0 ; i < m ; i++){
        cin >> infected[i];
     }
     sort(infected.begin(), infected.end());
     vector<long long> diff;

     diff.push_back((infected[0]-1)+(n-infected[m-1]));
     for(int i =0 ; i < m-1 ; i++){
         diff.push_back(infected[i+1]-infected[i]-1);
     }

     sort(diff.begin(),diff.end(),greater<int>());

     int k = diff.size();
     long long saved = 0 ;

     for(int i = 0 ; i < k ; i++){
        long long gap = diff[i];
        long long days_needed = 2*i;
        saved += gap-(1+days_needed);
     }

     cout << n-saved << "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t ;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}