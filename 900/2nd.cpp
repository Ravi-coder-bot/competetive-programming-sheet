#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k ;
    cin >> n >> k ;

    string s;
    cin >> s;
    map<char, int> freqMap;

    for(auto i : s){
        freqMap[i]++;
    }

    int odds = 0 ;
    for(auto &c : freqMap){
        if(c.second%2==1){
            odds ++;
        }   
    }

    int remLen = n - k;
    int maxAllowedOdd = remLen % 2; 
        if(k>=odds-maxAllowedOdd){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;  
        }
}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}