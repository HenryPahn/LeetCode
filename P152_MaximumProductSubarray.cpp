#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int maxProduct(vector<int>& nums) {
    int maxPD(1), minPD(1), res(INT_MIN);
    for(int i : nums) {
        int cur_minPD = min(i, min(maxPD * i, minPD * i));
        int cur_maxPD = max(i, max(maxPD * i, minPD * i));
        res = max(res, cur_maxPD);
        maxPD = cur_maxPD;
        minPD = cur_minPD;
    }
    return res;
}

int main() {
    vector<int> nums {-2,0,-1};
    cout << maxProduct(nums);
    return 0;
}