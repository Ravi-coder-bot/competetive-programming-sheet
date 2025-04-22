#include <bits/stdc++.h>
using namespace std;

void solve(){
    char grid[10][10];
    int count =0;

    for(int i=0; i<10 ;i++){
        for(int j=0; j<10 ;j++){
            cin >>  grid[i][j];
        }
    }

    for(int i=0; i<10 ;i++){
        for(int j=0; j<10 ;j++){
            if((i==0 && grid[i][j]== 'X')
             ||( j==0 && grid[i][j]== 'X')
             ||(i==9 && grid[i][j]== 'X')
             ||(j==9 && grid[i][j]== 'X')){
                count++;
            }
            else if((i==1 && grid[i][j]== 'X')
             ||( j==1 && grid[i][j]== 'X')
             ||(i==8 && grid[i][j]== 'X')
             ||(j==8 && grid[i][j]== 'X') ){
                count = count+2;
              }
              else if((i==2 && grid[i][j]== 'X')
              ||( j==2 && grid[i][j]== 'X')
              ||(i==7 && grid[i][j]== 'X')
              ||(j==7 && grid[i][j]== 'X') ){
                 count = count+3;
               }
               else if((i==3 && grid[i][j]== 'X')
               ||( j==3 && grid[i][j]== 'X')
               ||(i==6 && grid[i][j]== 'X')
               ||(j==6 && grid[i][j]== 'X') ){
                  count = count+4;
                }
                else if((i==4 && grid[i][j]== 'X')
                ||( j==4 && grid[i][j]== 'X')
                ||(i==5 && grid[i][j]== 'X')
                ||(j==5 && grid[i][j]== 'X') ){
                   count = count+5;
                 }
        }
    }
    cout << count << endl;


}

int main() {
    int t;
    cin >> t;
    while(t--){
     solve();
    }
    return 0;
}