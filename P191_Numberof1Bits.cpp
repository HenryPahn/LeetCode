#include <iostream>
using namespace std; 

int hammingWeight(uint32_t n) {
    int count = 0;
    while(n) {
        if(n & 1) count++;
        n >>= 1;
    }
    return count;
}

int main() {
    uint32_t n = 00000000000000000000000000001011; 
    cout << hammingWeight(n);
    return 0;
}