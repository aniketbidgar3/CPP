#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> rotate(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));  // Initialize the result matrix with the correct size

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            ans[j][n - 1 - i] = matrix[i][j];  // Rotate the matrix
        }
    }
    
    return ans;
}

int main() {
    int n = 3;
    vector<vector<int>> matrix(n, vector<int>(n));  // Use vector instead of raw array

    // Input the matrix
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    // Rotate the matrix
    vector<vector<int>> rotatedMatrix = rotate(matrix);

    // Output the rotated matrix
    cout << "Rotated matrix:\n";
    for (const auto& row : rotatedMatrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
