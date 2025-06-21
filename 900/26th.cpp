// koi number ka odd devisor na ho(bas 2 ki power wale number hote he)

#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n ;
    cin >> n ;

    if(n%2){
        cout << "YES" << endl;
        return;
    }
    

    for(int i =2 ; i*i <= n ; i++){
        if(n%i==0){
            if(i%2){
                cout<<"YES"<<endl;
                return;
            }
            long long second = n/i;
            if(second%2){
                cout<<"YES"<<endl;
                return;
            }
        }

    }

    cout << "NO" << endl;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}    