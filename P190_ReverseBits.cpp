#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

void reverseBits(uint32_t n) {
    n = (~n);
    while(n) {
        cout << (n & 1);
        n >>= 1;
    }
}

int main() {
    uint32_t n = 00000010100101000001111010011100;
    reverseBits(n);
    return 0;
}