#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n ;
    cin >> n;

    long long  maxCount = 1;
    
    for(long long i =1 ; i*i <= n ; i++){
        if(n%i == 0 ){

        long long start = i;
        long long length = 0 ;
        while(n%start == 0){
            length++;
            start++;
        }
        maxCount = max(maxCount ,length);

        long long j = n/i;
        start = j;
        length = 0 ;
        while(n%start == 0){
            length++;
            start++;
        }
        maxCount = max(maxCount ,length);  
        } 
    }
    

    cout << maxCount << endl;

}

int main() {
    long long  t;
    cin >> t;
    while(t--){
      solve();
    }
    return 0;
}