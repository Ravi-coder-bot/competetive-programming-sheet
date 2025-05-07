#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> generateMoves(int a,int b){
    return{
        {a,b},{a,-b},{-a,b},{-a,-b},
        {b,a},{b,-a},{-b,a},{-b,-a}
    };
}

void solve(){
    int a , b ;
    int xk , yk;
    int xq , yq;
    cin >> a >> b ;
    cin >> xk >> yk ;
    cin >> xq >> yq ;

    auto KnightMoves = generateMoves(a,b);
    set<pair<int,int>> forks;

    for(auto i : KnightMoves){
        int x = xk + i.first;
        int y = yk + i.second;

        for(auto j : KnightMoves){
            if(x+j.first == xq && y+j.second == yq){
                forks.insert({x,y});
                break;
            }
        }
        
    }

    int result = forks.size();
    cout << result << endl;

}

int main() {
    int t ;
    cin >> t;
    while(t--){
        solve();

    }
    
    return 0;
}