#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a , b , c;
    cin >> a>> b >>c;

    int sum = a+b+c;
    if(a==b && b==c && c==a){
        cout << "YES" << endl;
    }



    if(sum%3 == 0){
        int avg = sum/3;
        int diff1 = avg-a;
        int diff2 = avg-b;
        int diff3 = c-avg;

        if(diff1>=0 && diff2>=0 && diff3>=0 && diff1 + diff2 == diff3){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    else{
        cout << "NO" << endl ;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}