#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums = {1,5,3,7,8,5,9,42,5,7,0};
    int n =nums.size();
    int max = INT32_MIN;
    for (int i = 0; i < n; i++)
    {
        if(nums[i]>max)
        max=nums[i];
    }
    cout<<max;
    return 0;
}