#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> temp;
    for(int i = 0; i < nums.size(); i++) {
        int first = nums[i];
        int last = target - first;
        int next = i + 1;
        while(next < nums.size())  {
            if(nums[next] == last) {
                temp = vector<int> {i, next}; 
                break;
            }
            next++;
        }
    }
    return temp;
}

int main() {  
    int num[] = {3,2,4}, target = 6;
    vector<int> nums(num, num + 3);
    vector<int> temp = twoSum(nums, target);
    for(int i = 0; i < temp.size(); i++) 
        cout << temp[i] << " ";
   return 0;     
}       