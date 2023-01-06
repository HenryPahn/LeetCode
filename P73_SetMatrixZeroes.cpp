#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int c[200], r[200], index = 0;
    for(int row = 0; row < matrix.size(); row++) {
        for(int col = 0; col < matrix[row].size(); col++) 
            if(matrix[row][col] == 0) {
                c[index] = col; 
                r[index] = row;
                index++; 
            }
    }
    for(int i = 0; i < index; i++) {
        int posC = 0, posR = 0;
        while(posC < matrix[r[i]].size()) {
            matrix[r[i]][posC] = 0;
            posC++;
        }
        while(posR < matrix.size()) {
            matrix[posR][c[i]] = 0;
            posR++;
        }
    }
}


int main() {
    // vector<vector<int>> matrix{{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    vector<vector<int>> matrix{{1,1,1},{1,0,1},{1,1,1}};
    setZeroes(matrix);
    for(auto i : matrix) {
        for(auto j : i) 
            cout << j << " ";
    cout << endl;
    }
    return 0; 
}