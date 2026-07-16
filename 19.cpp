#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    vector<int> nums= {1, 60, -10, 70, -80, 2, -8, -1};
        sort(nums.begin(), nums.end());

        int left = 0;
        int right = nums.size() - 1;

        int minSum = INT_MAX;
        vector<int> ans(2);

        while (left < right) {
            int sum = nums[left] + nums[right];

            if (abs(sum) < abs(minSum)) {
                minSum = sum;
                ans[0] = nums[left];
                ans[1] = nums[right];
            }

            if (sum < 0)
                left++;
            else if (sum > 0)
                right--;
            else
                break;

            }
            cout<<ans[0]<<" ";
            cout<<ans[1];
            return 0;
}