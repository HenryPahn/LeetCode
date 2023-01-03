#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

vector<int> countBits(int n) {
    vector<int> temp(n + 1, 0);
    for(int i = 1; i <= n; i++) 
        temp[i] = temp[i >> 1] + (i & 1);
    return temp;
}

int main() {
    int n = 5; 
    vector<int> v;
    v = countBits(n);
    for(int i : v) 
        cout << i << " ";
    return 0;
}