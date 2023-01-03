#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

uint32_t reverseBits(uint32_t n) {
    uint32_t sum = 0;
    int i = 32;
    while(n) {
        uint32_t p = pow(2, i);
        if(n & 1) sum += p;
        n >>= 1;
        i--;
    }
    return sum;
}

int main() {
    uint32_t n = 00000010100101000001111010011100;
    // reverseBits(n);
    cout << (n & 1);
    return 0;
}