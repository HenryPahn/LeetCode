#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
#include <cstring>
#include <cctype>
#include <string>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    int a = 5, b = 6; 
    int res = 1;
    for(int i = 0; i < b; i++)
        res *= a;
        cout << pow(a, b);
    return 0;
}