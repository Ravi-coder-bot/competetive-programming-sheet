#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n , m , a , b;
    cin >> n >> m >> a >> b ;

    int rowlow = a-1;
    int rowhigh = n-a;
    int collow = b-1;
    int colhigh = m-b;

    int maxrow = max(n-a,a-1);
    int maxcol = max(m-b,b-1);

    int maxall = max(maxrow,maxcol);

    int count = 0;

    if(maxall == rowlow){
        n = n-a+1;
    }
    else if(maxall == rowhigh){
        n = a;
    }
    else if(maxall == collow){
        m = m-b+1;
    }
    else if(maxall == colhigh){
        m = b;
    }

    if(n%2!=0 && n!=1){
        n = n+1;
    }

    if(m%2!=0 && m!=1){
        m = m+1;
    }

    while(n>1){
        n = n/2;
        if(n==3 || n==5){
            n = n+1;
        }
        count++;
    }

    while(m>1){
        m = m/2;
        if(m==3 || m==5){
            m = m+1;
        }
        count++;
    }

    cout << count + 1 << endl;
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t ;
    while(t--){
        solve();
    }
    
    return 0;
}