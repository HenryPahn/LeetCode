#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>
using namespace std;
int check(int *arr, char t) {
        if(arr[t] != 0) return 0;
        return 1;
    }
int main()
{
    int a[128] = {0};
    a[122] = 1;
    cout << check(a, 'z');
    return 0;
}