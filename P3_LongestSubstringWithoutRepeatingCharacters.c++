#include <iostream>
using namespace std; 

    int check(string s, char t) {
        for(int i = 0; i < s.length(); i++) 
            if(t == s[i]) return 0;
        return 1;
    }

    int lengthOfLongestSubstring(string s) {
        string temp = "";
        for(int i = 0; i < s.length(); i++) {
            string tempSubString = "";
            tempSubString += s[i];
            int next = i + 1;
            while(next < s.length()) {
                if(check(tempSubString, s[next])) {
                    tempSubString += s[next];
                    next++;
                } else break;
            }
            if(temp == "") temp = tempSubString;
            else 
                if(temp.length() < tempSubString.length()) temp = tempSubString;
        }
        return temp.length();
    }

int main() {
    string s = "bbbbb"; 
    cout << lengthOfLongestSubstring(s);
    return 0;
}