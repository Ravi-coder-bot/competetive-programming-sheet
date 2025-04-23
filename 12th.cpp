#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int>arrb(n);

    for(int i=0;i< n;i++){
        cin >> arrb[i]; 
    }

    vector<int> arra;
    arra.push_back(arrb[0]);
   
    for(int i=1 ;i< n;i++){
        if(arrb[i-1] <= arrb[i]){
            arra.push_back(arrb[i]);
        }
        else{
            arra.push_back(arrb[i]);    
            arra.push_back(arrb[i]);
        }
    }
    int m = arra.size();
    cout << m << endl;
    for(int val : arra){
        cout << val << " ";
    }
    cout << endl;
}

int main() { 
    srand(time(0));
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}