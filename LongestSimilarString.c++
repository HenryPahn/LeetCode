#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

string comparison(string a, string b) {
    string prefix = "", tempPrefix;
    for(int i = 0; i < a.length(); i++) {
        for(int j = 0; j < b.length(); j++) {
            if(a[i] == b[j]) {
                int count = 1, k = i + 1, l = j + 1;
                while (k < a.length() && a[k++] == b[l++]) 
                    count++;
                tempPrefix = a.substr(i, count);
            }
        }
        if(prefix == "") prefix = tempPrefix;
        if(tempPrefix.length() > prefix.length()) 
            prefix = tempPrefix;
    }
    return prefix;
}

string specialCase(vector<string>& strs, int pos) {
    for(int i = 0; i < strs.size(); i++) {
        int flag = 0;
        for(int j = 0; j < strs[i].length(); j++) 
            if (strs[pos][0] == strs[i][j]) {
                flag = 1;
                continue;
            }
        if(!flag) return "";
    }
    return strs[pos];
} 

string longestSimilarString(vector<string>& strs) {
    string prefix;
    if(strs.size() == 1) 
        return strs[0];
    else {
        for(int i = 0; i < strs.size(); i++) {
            if(strs[i] == "") return "";
            if(strs[i].length() == 1) return specialCase(strs, i);
        }   
        prefix = comparison(strs[0], strs[1]);
        for(int i = 2; i < strs.size(); i++) 
            prefix = comparison(prefix, strs[i]);
    } 
    return prefix;
}

int main() {
    string str[] = {"flower","flow","flight"};
    vector<string> strs(str + 0, str + 3);
    cout <<  longestSimilarString(strs);
    return 0;
}
