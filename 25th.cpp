#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    string s ;
    cin >>s;


    int i =0;
    int j = n-1;
    int count =0;
    while(i<j){
        if(s[i]!=s[j]){
            count ++;
            i++;
            j--;
        }
        else{
            break;
        }
    }
    int result = n-(2*count);

    cout << result << endl;
}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve(); 
    }
    
    return 0;
}