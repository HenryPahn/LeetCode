#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

bool check(vector<vector<char>>& board, string word, int pos , int x, int y) {
    if(x < 0 || x >= board.size() || y < 0 || y >= board[0].size() || board[x][y] != word[pos]) 
        return 0;
    if(pos == word.length() - 1) return 1; 
    board[x][y] = 'x';
    bool result =   check(board, word, pos + 1, x + 1, y) || 
                    check(board, word, pos + 1, x - 1, y) || 
                    check(board, word, pos + 1, x, y + 1) || 
                    check(board, word, pos + 1, x, y - 1);
    board[x][y] = word[pos];
    return result;
}
 
bool exist(vector<vector<char>>& board, string word) {
    for(int row = 0; row < board.size(); row++) 
        for(int col = 0; col < board[row].size(); col++) 
            if(board[row][col] == word[0])
                if(check(board, word, 0, row, col)) 
                    return 1; 
    return 0;   
}

int main() {
    vector<vector<char>> board {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    // string word = "SEE";
    string word = "ABCB";
    cout << exist(board, word);
    return 0;
}