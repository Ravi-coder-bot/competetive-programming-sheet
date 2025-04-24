#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    vector<int> arra(n);
    for(int i=0; i<n ;i++){
        cin >> arra[i];
    }

    vector<int> arrb;
    vector<int> arrc;

    arrb.push_back(arra[0]);
    for(int i=1 ; i < n; i++){
        int m = arrb.size();    
        for(int j = 0 ; j < m ; j++){
            if(arrb[j]%arra[i] == 0){
            m =  m+1;
            arrb.push_back(arra[i]);
        }
        else{
            arrc.push_back(arra[i]);
        }
        }
        
    }

    int m = arrb.size();
    int l = arrc.size();
    if(m==0 || l==0){
        cout << -1 << endl;
        return;
    }
    cout << m << " " << l << endl;
    for(int val : arrb){
        cout << val << " ";
    }
    cout << endl;
    for(int val : arrc){
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}