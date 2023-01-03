#include <iostream>
using namespace std;

int transfer(char a) {
        if(a == 'I') return 1;
        else if(a == 'V') return 5; 
        else if(a == 'X') return 10; 
        else if(a == 'L') return 50; 
        else if(a == 'C') return 100; 
        else if(a == 'D') return 500; 
        else return 1000; 
    }

    int comparison(char a, char b) {
        if(transfer(a) < transfer(b)) return 0;
        return 1;
    }

    int romanToInt(string s) {
        int result = transfer(s[0]);
        for(int i = 0; i < s.length() - 1; i++) {
            if(comparison(s[i], s[i + 1])) 
                result += transfer(s[i + 1]);
            else {
                result  += (transfer(s[i + 1]) - transfer(s[i]) * 2);
            }
        }
        return result;
    }

int main() {
    string s = "LVIII";
    cout << romanToInt(s);
    return 0;
}