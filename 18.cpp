#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int>nums={1,2,3,4,5,6,7,8,9,10};
    int k=3;
    int n = nums.size();

        k %= n;

        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        for (int i = 0; i < n; i++)
        {
            cout << nums[i];
        }
        return 0;
    }