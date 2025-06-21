#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n ;
    long long q;
    cin >> n >> q;

    vector<long long> steps(n);
    vector<long long> ques(q);

    for (int i =0 ; i < n ; i++){
        cin >> steps[i];
    }

    for(int i=0 ; i < q ; i++){
        cin >> ques[i];
    }

    for(int i =0 ; i < q ; i++){
        long long temp =0 ;
        long long stop = ques[i];
        for(int j =0 ; j < n ;j++){
            if(steps[j] <= stop){
                temp += steps[j];
            }
            else if(steps[j]>stop){
                break;
            }
        }
        cout << temp << ' ';
    }       
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long t;
    cin >> t;

    while(t--){
        solve();
    }
    
    return 0;
}