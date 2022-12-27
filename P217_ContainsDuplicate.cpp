#include <iostream>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <vector>
using namespace std; 
 
// bool containsDuplicate(vector<int>& nums) {
//     bool res = false;
//     sort(nums.begin(), nums.end());
//     for(int i = 0; i < nums.size() - 1; i++) {
//         if(nums[i] == nums[i + 1]) {
//             res = true; 
//             break;
//         }
//     }
//     return res;
// }

bool containsDuplicate(vector<int>& nums) {
    bool res = false;
    unordered_map<int, int> v;
    for(auto i : nums) {
        if(v[i] == i)  {
            res = true; 
            break;
        }
        v[i] = i;
    }
    return res;
}

int main() {
    vector<int> nums {1,2,3,1};
    cout << containsDuplicate(nums);
    return 0;
}