#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;

int main()
{
    vector<int> nums {1,2,3,4}; 
    int tp1 = 1, tp2 = 1, n = nums.size();
    vector<int> res(n), l(n), r(n);
    
    for(int i = 0, j = n - 1; i < n; i++, j--) {
        tp1 *= nums[i];
        l[i] = tp1;
        tp2 *= nums[j];
        r[i] = tp2;
    }
    for(auto i : l) 
        cout << i << " ";
    cout << endl;
    for(auto i : r) 
        cout << i << " ";
    return 0;
}