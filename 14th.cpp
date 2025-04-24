#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin >> a >>  b >> c ;
    if(c%2==0){
        if((c/2)+a > (c/2)+b){
            cout << "First" << endl;
        }
        else{
            cout << "Second" << endl;
        }
    }
    else{ 
        if(((c+1)/2)+a > ((c-1)/2)+b){
            cout << "First"<< endl ;
        }
        else{
            cout << "Second" << endl;
        }
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