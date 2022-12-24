#include <iostream>
#include <string>
#include <algorithm>
using namespace std; 

string longestPalindrome(string s) {
    int size = s.length();
    string temp = "";
    for(int i = 0; i < size; i++) {
        if(size == 1 || (i == size - 2 && s[i] != s[size - 1])) temp += s[i];
    }
    return temp;
}

int main() {
    string s = "ac"; 
    cout << longestPalindrome(s); 
}