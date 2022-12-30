#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int search(vector<int>nums, int target) {
    int pos, low = 0, high = nums.size() - 1;
    while(high - low > 1) {
        int mid = (low + high) / 2;
        if(target > nums[mid]) low = mid;
        else high = mid;
    }
    if(target == nums[low]) pos = low; 
    else if(target == nums[high]) pos = high;
    else pos = - 1;
    return pos;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int target = 2;
    cout << search(nums, target);
    return 0;
}