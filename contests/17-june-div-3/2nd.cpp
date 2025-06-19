#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n ; 
    cin >> n;
    string s;
    cin >> s;

    vector<int> freq1(26, 0);
    vector<int> freq2(26, 0);

    for(int i =1; i < n ; i++){
        char ch = s[i];
        freq1[ch-'a']++;
        if(freq1[ch-'a']>=2){
            cout << "YES" <<'\n';
            return;
        }
    }

    for(int i =0; i < n-1 ; i++){
        char ch = s[i];
        freq2[ch-'a']++;
        if(freq2[ch-'a']>=2){
            cout << "YES" << '\n';
            return;
        }
    }

    cout << "NO"<< "\n";
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t ; 

    while(t--){
        solve();
    }

    
    return 0;
}