#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

// void rotate(vector<vector<int>>& matrix) {
//     reverse(matrix.begin(), matrix.end());
//     int n = matrix.size();
//     for(int row = 0; row < n; row++) 
//         for(int col = row; col < n; col++) 
//             swap(matrix[row][col], matrix[col][row]);
// }

void transpose(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0; i < n; i++) 
        for(int j = i; j < n; j++) 
            swap(matrix[i][j], matrix[j][i]);
}

void reverse(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < n / 2; j++) 
            swap(matrix[i][j], matrix[i][n - 1 - j]);
}

void rotate(vector<vector<int>>& matrix) {
    transpose(matrix);
    reverse(matrix);   
}

int main() {
    vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int>> matrix{{5,1,9,11},{2,4,8,10},{15,14,12,16}};
    rotate(matrix);
    for(auto i : matrix) {
        for(auto j : i) 
            cout << j << " ";
        cout << endl;
    }
        
    return 0;
}