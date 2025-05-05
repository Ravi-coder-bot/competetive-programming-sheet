#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s ;
    cin >> s;

    int n , k ;
    cin >> n >> k ;
    map<char, int> freqMap;

    for(auto i : s){
        freqMap[i]++;
    }

    char i = s[0] ;
    while(k--){
        if(freqMap[i]%2==1){
            freqMap[i]--;
        }
        else{
            i++;
        }

        while

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