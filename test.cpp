#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int>nums = {-2,1,-3,4,-1,2,1,-5,4};
    int n =nums.size();
    int sum=0;
    int max=INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        sum+=nums[i];
    }
    return 0;
}