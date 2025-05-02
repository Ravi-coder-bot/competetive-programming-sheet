#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
   while(a>0 &&  b>0){
     if(a > b){
        a  = a%b;
     }
     else{
        b = b%a;
     }
   }
   if(a == 0){
       return b;
   }
   else{
       return a;
   }
}

bool check_good(vector<int> arr){
    int n = arr.size();
    int result = 1;
    for(int i=0;  i < n; i++){
        result = gcd(result, arr[i]);
    }

    if(result< n){
        return true;
    }
    return false;
}

bool check_beautifull(vector<int> arr){
    int n = arr.size();
    vector<int> temp;
    temp.push_back(arr[0]); 
    for(int i=1; i < n ; i++){
            temp.push_back(arr[i]);
            if(!check_good(temp)){
                return false;
                break;
            }
    }
    return true;
}


void solve(){
    int n;
    cin >> n  ;
    vector<int> arr(n);
    for(int i =0; i < n ; i++){
        cin >> arr[i];
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