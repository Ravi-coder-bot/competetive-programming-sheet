#include <bits/stdc++.h>
using namespace std;

void solve (){
    long long n,k;
    cin >> n >> k ;

    int devi = n/k;

    if(n%2==0 || n%k==2 || n%k==0 ){
        cout << "YES" << endl;
        return ;
    }
    else{
        for(int i= devi-1 ; i > 0 ; i--){
            int rem = n-(i*k);
            if(rem%2==0 && rem>=0 ){
                cout << "YES" << endl;
                return;
            }
        }  
    }

    cout << "NO" << endl;
}

int main() { 
    long long t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}