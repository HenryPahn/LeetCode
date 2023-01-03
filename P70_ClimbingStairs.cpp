#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int climbStairs(int n) {
    int arr[n];
    arr[0] = 1;
    arr[1] = 1; 
    for(int i = 2; i <= n; i++) 
        arr[i] = arr[i - 1] + arr[i - 2];
    return arr[n];
}

int main() {
    int n = 5; 
    cout << climbStairs(n);
    return 0; 
}