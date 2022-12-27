#include <iostream>
#include <algorithm>
#include <math.h>
#include <unordered_map>
#include <vector>
using namespace std; 

vector<int> productExceptSelf(vector<int>& nums) {
    int tp1 = 1, tp2 = 1, n = nums.size();
    vector<int> res(n), l(n), r(n);
        
    for(int i = 0, j = n - 1; i < n; i++, j--) {
        tp1 *= nums[i];
        l[i] = tp1;
        tp2 *= nums[j];
        r[j] = tp2;
    }
    res[0] = r[1];
    res [n - 1] = l[n - 2];
    for(int i = 1; i < n - 1; i++) 
           res[i] = l[i - 1] * r[i + 1];
    return res;
}

int main() {
    vector<int> nums {1,2,3,4}; 
    vector<int> res = productExceptSelf(nums); 
    for(int i : res) 
        cout << i << " ";
    return 0;
}