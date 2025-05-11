#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generateSpiralMatrix(int n) {
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    if (n <= 0) return matrix;

    int x, y;
    if (n % 2 == 1) {
        x = y = n / 2;
    } else {
        x = n / 2 - 1;
        y = n / 2;
    }

    int num = 0;
    matrix[x][y] = num++;
    
    int directions[4][2] = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    int dir = 0;
    int step = 1;
    int steps_in_direction = 1;
    
    while (num < n * n) {
        for (int i = 0; i < steps_in_direction && num < n * n; i++) {
            x += directions[dir][0];
            y += directions[dir][1];
            if (x >= 0 && x < n && y >= 0 && y < n) {
                matrix[x][y] = num++;
            }
        }
        
        dir = (dir + 1) % 4;
        if (dir % 2 == 0) {
            steps_in_direction++;
        }
    }
    
    return matrix;
}

void printMatrix(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix = generateSpiralMatrix(n);
        printMatrix(matrix);
    }
    
    return 0;
}