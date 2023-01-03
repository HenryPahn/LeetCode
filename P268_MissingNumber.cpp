#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int missingNumber(vector<int>& nums) {
    int n = nums.size(); 
    int total = n * (n + 1) / 2;
    for(auto i : nums) 
        total -= i;
    return total;  
}

int main() {
    vector<int> nums{9,6,4,2,3,5,7,0,1};
    cout << missingNumber(nums);
    return 0;
}