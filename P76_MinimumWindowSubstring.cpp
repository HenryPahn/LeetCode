#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;



string minWindow(string s, string t) {
    vector<int> str(256, 0), tar(256, 0);
    for(int i = 0; i < t.size(); i++) 
        tar[t[i]]++;
    if(s.size() < t.size()) return "";
    int begin = 0, index = -1, length = INT_MAX, limit = 0;
    for(int end = 0; end < s.size(); end++) {
        str[s[end]]++; 
        if(str[s[end]] <= tar[s[end]]) limit++;
        if(limit == t.size()) {
            while(!tar[s[begin]] || str[s[begin]] > tar[s[begin]]) {
                if(str[s[begin]] > tar[s[begin]]) str[s[begin]]--;  
                begin++;
            }
            int l = end - begin + 1; 
            if(l < length) {
                length = l;
                index = begin;
            } 
        }
    }
    if(index == -1) return "";
    return s.substr(index, length);
}

int main() {
    string s = "ADOBECODEBANC", t = "ABC";
    // string s = "a", t = "a";
    // string s = "a", t = "aa";
    cout << minWindow(s, t);
    return 0;
}