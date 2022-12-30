#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int search(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1; 
    while(high - low > 1) {
        int mid = (high + low) / 2;
        if(nums[mid] < nums[high]) {
            if(nums[mid] <= target && target <= nums[high]) low = mid;
            else high = mid - 1;
        } else {
            if(nums[low] <= target && target <= nums[mid]) high = mid; 
            else low = mid;
        }
    }
    if(target == nums[low]) return low; 
    else if (target == nums[high]) return high;
    else return -1;
}

int main() {
    vector<int> nums {4, 5, 6, 7, 8, 0, 1, 2, 3}; 
    int target = 1; 
    cout << search(nums, target);
    return 0;
}