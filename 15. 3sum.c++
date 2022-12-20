#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        if(nums.size() < 3 || nums[0] > 0) 
            result.clear();
        for(int i = 0; i < nums.size() - 2; i++) {
            if(i > 0 && nums[i] == nums[i-1]) continue;  
            int begin = nums[i];
            int next = i + 1;
            int end = nums.size() - 1;
            while (next < end) {
                int rest = nums[next] + nums[end];
                if(begin + rest == 0) {
                    result.push_back(vector<int> {begin, nums[next], nums[end]});
                    while(next < end && nums[next] == nums[next + 1]) next++;
                    while(next < end && nums[end] == nums[end - 1]) end--;
                    next++;
                    end--;
                }
                else if(begin + rest < 0) next++;               
                else end--;
            }
        }
        return result;
    }

int main() {
    int num[] = {-4,-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,-5,0};
    vector<int> nums(num, num + 16);
    vector<vector<int>> arr;
    arr = threeSum(nums);
    for(int i = 0; i < arr.size(); i++) {
        for(int j = 0; j < arr[i].size(); j++) 
            cout << arr[i][j] << " ";
        cout << endl;
    }
   return 0;     
}       