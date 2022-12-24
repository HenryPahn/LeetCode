#include <iostream>
#include <algorithm>
#include <vector>
using namespace std; 

string comparison(string a, string b) {
    int i = 0;
    for(; i < min(a.size(), b.size()); i++)
        if(a[i] != b[i]) break;
    return a.substr(0, i);
}

string longestCommonPrefix(vector<string>& strs) {
    if(strs.empty())
        return "";
    string prefix = strs[0];
    for(int i = 1; i < strs.size(); i++) 
        prefix = comparison(prefix, strs[i]);
    return prefix;
}

int main() {
    string str[] = {"flower","flow","flight"};
    vector<string> strs(str + 0, str + 3);
    cout <<  longestCommonPrefix(strs);
    return 0;
}
