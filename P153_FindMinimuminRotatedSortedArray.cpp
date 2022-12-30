#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int findMin(vector<int>& nums) { 
    int low = 0; 
    int high = nums.size() - 1; 
    while(low != high) {
        int mid = (low + high) / 2; 
        if(nums[mid] < nums[high]) high = mid; 
        else low = mid; 
    }
    return min(nums[low], nums[high]);
}


int main() {
    vector<int> nums {11,13,15,17};
    cout << findMin(nums);
    return 0; 
}