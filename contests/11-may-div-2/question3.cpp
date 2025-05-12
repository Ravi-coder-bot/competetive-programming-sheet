#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n ;
    cin >> n ;
   vector<vector<int>> grid(n,vector<int>(n,0));
   int sum = (n*n)-1;
   int left = 0 ;
   int right = n-1;
   int top = 0;
   int bottom = n-1;

   while(sum>=0 ){
      for(int i =left ; i <= right && sum >=0 ;i++){
         grid[top][i] = sum;
         sum--;
      }
      top++;

      for(int i = top ; i<=bottom && sum >=0 ; i++){
         grid[i][right] = sum;
         sum--;
      }
      right--;

      for(int i =right; i >= left && sum >=0 ; i--){
         grid[bottom][i] = sum;
         sum--;
      }
      bottom--;

      for(int i = bottom ; i >= top && sum >=0 ; i--){
         grid[i][left] = sum;
         sum--;
      }
      left++;
   }


   for(int i =0 ; i < n ; i++){
      for(int j =0 ; j < n ; j++){
         cout << grid[i][j] << " " ;
      }
      cout << endl;
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