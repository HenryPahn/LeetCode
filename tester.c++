#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int binary(int n) {
    int sum = 0, i = 0;
    while(n > 0) {
        sum += (n % 2) * pow(10, i);
        i++;
        n /= 2;
    }
    return sum;
} 

int main()
{
    uint32_t n = pow(2)
    cout << pow(2, 31);

    return 0;
}