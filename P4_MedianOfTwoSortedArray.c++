#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

// double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//     double res;
//     vector<int> nums(nums1.size() + nums2.size());
//     merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), nums.begin());
//     sort(nums.begin(), nums.end());
//     int pos = nums.size() / 2;
//     if(nums.size() % 2 != 0) 
//         res = (double) nums[pos]; 
//     else 
//         res = (double) (nums[pos] + nums[pos - 1]) / 2; 
//     return res;
// }

vector<int> getMedian(vector<int>& nums, int size) {
    vector<int> temp;
    if(size == 0) return temp;
    int pos = size / 2;
    if(size % 2 != 0) 
        temp.push_back(nums[pos]);
    else {
        temp.push_back(nums[pos - 1]);
        temp.push_back(nums[pos]);
    }
    return temp;
}


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double res = 0;
    vector<int> n1, n2;
    
    if(nums1.size() < nums2.size()) {
        n1 = getMedian(nums1, nums1.size());
        for(int i = 0, j = nums2.size(); i < n1.size(); i++, j++) 
            nums2[j] = n1[i];
            merge(n1.begin(), n1.end(), n2.begin(), n2.end(), nums2.begin());
        // sort(nums2.begin(), nums2.end());
        for(int i = 0; i < nums2.size(); i++)
            cout << nums2[i] << " "; 
        n2 = getMedian(nums2, nums2.size());
        for(int i = 0; i < n2.size(); i++)
            res += n2[i];
        res /= 2;
    } else {
        n1 = getMedian(nums2, nums2.size());
        for(int i = 0, j = nums1.size(); i < n1.size(); i++, j++) 
            nums1[j] = n1[i];
        sort(nums1.begin(), nums1.end());
        n2 = getMedian(nums1, nums1.size());
        for(int i = 0; i < n2.size(); i++)
            
            // res += n2[i];
        res /= 2;
    }
    return res;
}

int main() {
    vector<int> nums1 = {1};
    vector<int> nums2 = {2,3,4};
    cout << findMedianSortedArrays(nums1, nums2); 
    return 0;
}
