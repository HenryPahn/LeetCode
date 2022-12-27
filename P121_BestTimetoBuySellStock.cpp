#include <iostream>
#include <vector>
using namespace std; 

int maxProfit(vector<int> prices) {
    int res = 0, min = prices[0]; 
    for(int i = 1; i < prices.size(); i++) {
        if(min >= prices[i]) min =  prices[i];
        else res = max(res, prices[i] - min);
    }
    return res;
}

int main () {
    vector<int> prices {7,1,5,3,6,4}; 
    cout << maxProfit(prices); 
    return 0;
}