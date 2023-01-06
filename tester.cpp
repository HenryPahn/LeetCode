#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <math.h>
#include <unordered_map>
using namespace std;


int main()
{
    vector<vector<int>> maxtrix{{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    for(int i = 0; i < maxtrix.size(); i++) 
        cout << maxtrix[i][0] << " ";
    return 0;
}