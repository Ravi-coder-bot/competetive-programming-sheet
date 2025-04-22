#include <bits/stdc++.h>
using namespace std;

bool checkSubstring(string s1, string s2) {
    int n = s1.length(), m = s2.length();
    
    for(int i =0; i <= n-m; i++){
        int match = true;
        for(int j =0; j < m; j++){
            if(s1[i+j] != s2[j]){
                match = false;
                break;
            }
        }
        if(match) return true;
    }
    return false;
}

void solve(){
    int n , m ;
    cin >> n >> m ;
    string x,s ;
    cin >> x >> s ;
    int count = 0 ;
    if(checkSubstring(x,s)){
        cout << count << endl ;
        return ;
    }

    while(!checkSubstring(x,s) && x.size()<=250){
        x = x + x;
        count ++;
    }

    if(checkSubstring(x,s)){
       cout << count << endl; 
    }
    else{
       cout << -1 << endl;
    }
    

}

int main() {
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}