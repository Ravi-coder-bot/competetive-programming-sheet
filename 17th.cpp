#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , k , x;
    cin >> n >> k >> x;

    if(x==1){
        if(n%2 == 0 && k>1){
            cout << "YES" << endl;
            cout << n/2;
            cout << endl;
        for(int i = 0 ; i < n/2; i++){
            cout <<  2 << " ";
        }
        cout << endl ;
            return; 
        }
        else {
            if(k>2){
                cout << "YES" << endl;
                cout << (n-1)/2;
                cout << endl ;
                for(int i = 0 ; i < (n-1)/2-1 ; i++){
                    cout << 2 << " ";
                }
                cout << 3 << endl;
                return;
            }
            else{
                cout << "NO" << endl;
                return;
            }
        };
    }
    else{
        cout << "YES" << endl;
        cout << n;
        cout << endl;
        for(int i = 0 ; i < n ; i++){
            cout << 1 << " ";
        }
        cout << endl;
        return;
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