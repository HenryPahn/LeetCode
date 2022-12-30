#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int maxSubArray(vector<int>& nums) {
    int res = INT_MIN, temp = 0, MIN_SUM = 0;
    for(int i : nums) {
        temp += i;
        res = max(temp - MIN_SUM, res);
        MIN_SUM = min(temp, MIN_SUM);
    }
    return res;
}
    
int main() {
    vector<int> nums {-1};
    cout << maxSubArray(nums);
    return 0;
}