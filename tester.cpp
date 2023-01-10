#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

int main()
{
     string unformatted_full_name {"StephenHawking"};
     string a {unformatted_full_name, 0, 7}; 
     cout <<  a;
    return 0;
}