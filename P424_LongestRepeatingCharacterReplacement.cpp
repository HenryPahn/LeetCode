#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;


int characterReplacement(string s, int k) {
    vector<int> words(128);
    int first = 0, count = 0; 
    for(int end = 0; end < s.length(); end++) {
        words[s[end]]++;
        count = max(count, words[s[end]]);
        int length = end - first + 1;
        if(length - count > k) {
            words[s[first]]--; 
            first++;
        }
    }
    return s.length() - first;
}

int main() {    
    // string s = "ABAB";  int k = 2; 
    string s = "AABABBA";  int k = 1; 
    // string s =""; int k = 0;
    cout << characterReplacement(s, k); 
    return 0;
}