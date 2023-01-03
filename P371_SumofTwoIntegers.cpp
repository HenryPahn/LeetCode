#include <iostream>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <vector>
using namespace std; 

int getSum(int a, int b) {
    int res = (a | b); 
    int carry = (a & b);
    return res + carry;
}

int main() {
    int a = 2, b = 3;
    cout << getSum(a, b);
    return 0;
}