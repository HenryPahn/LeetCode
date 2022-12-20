#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
    int num[] = {0,0,0};
    vector<int> nums(num + 0, num + 3);
    cout<< accumulate(nums.begin(),nums.end(),0);
    return 0;
}