#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a , b ;
    int xk , yk;
    int xq , yq;
    cin >> a >> b ;
    cin >> xk >> yk ;
    cin >> xq >> yq ;

    int count = 0 ;

    if(xk-a == xq+a){
        if(yk-a == yq+a){
            count ++;
        }

        if(yk+a == yq-a){
            count ++ ;
        }
        
    }

    if(xk + a == xq-a){
        if(yk-a == yq+a){
            count ++;
        }

        if(yk+a == yq-a){
            count ++ ;
        }
        
    }

    cout << count << endl;


}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve();

    }
    
    return 0;
}