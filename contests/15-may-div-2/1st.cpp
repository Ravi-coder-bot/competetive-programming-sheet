#include <bits/stdc++.h>
using namespace std;

string mergeStrings(string a, string b) {
    int n = a.size();
    int m = b.size();
    for (int i = 0; i <= n; ++i) {
        if (a.substr(n - i, i) == b.substr(0, i)) {
            return a + b.substr(i);
        }
    }

     for (int i = 0; i <= n; ++i) {
        if (b.substr(m - i, i) == a.substr(0, i)) {
            return b + a.substr(i);
        }
    }

    return a + b; 
}


void solve(){
    int n;
    cin >> n;

    vector<string> alls(2*n-2);

    for(int i =0 ; i < 2*n-2 ; i++){
        cin >> alls[i];
    }

    unordered_map<string , int> lengthmap ;

    for(auto i : alls){
        lengthmap[i] = i.length();
    }

    string firstlargest = "", secondlargest = "" ;
    int firstlargestlen = 0 , secondlargestlen = 0 ;

    for(auto i : lengthmap){
        if(i.second >= firstlargestlen){
            secondlargestlen = firstlargestlen;
            firstlargestlen = i.second;
            secondlargest = firstlargest ;
            firstlargest = i.first ;
        }
        else if(i.second > secondlargestlen){
            secondlargestlen = i.second;
            secondlargest = i.first ;
        }
    }

    string s = mergeStrings(firstlargest,secondlargest) ;
    int k  = s.length()-1;
    int l = 0 ;
    while(l < k){
        if(s[l]!=s[k]){
            cout << "NO" << "\n";
            return ;
        }
        l++ ;
        k-- ;
    }
    cout << "YES" << "\n";
    }



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}