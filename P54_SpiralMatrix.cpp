#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> temp;   
    int row = matrix.size();
    int col = matrix[0].size();
    int firstRow = 0, lastRow = row - 1;
    int firstCol = 0, lastCol = col - 1;
    int count = 0, total = row * col;
    while(count < total) {
        for(int i = firstCol; i <= lastCol && count < total; i++) {
            temp.push_back(matrix[firstRow][i]);
            count++;
        } 
        firstRow++;
        for(int i = firstRow; i <= lastRow && count < total; i++) {
            temp.push_back(matrix[i][lastCol]);
            count++;
        }
        lastCol--;
        for(int i = lastCol; i >= firstCol && count < total; i--) {
            temp.push_back(matrix[lastRow][i]);
            count++;
        }
        lastRow--;
        for(int i = lastRow; i >= firstRow && count < total; i--) {
            temp.push_back(matrix[i][firstCol]);
            count++;
        }
        firstCol++;
    }
    return temp;
}

int main() {
    // vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
    // vector<vector<int>> matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<vector<int>> matrix{{2,3}};
    vector<int> result = spiralOrder(matrix); 
    for(auto i : result) 
        cout << i << " ";
    return 0;
}