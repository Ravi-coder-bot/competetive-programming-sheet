#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a ,x , y ;
   cin >> a >> x >> y ;

   if(a>x && a>y){
       cout << "YES" << "\n";
   }
   else if(a < x  && a < y ){
     cout << "YES" << "\n";
   }
   else{
     cout << "NO" << "\n";
   }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t ;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}