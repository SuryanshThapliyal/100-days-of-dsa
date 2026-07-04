#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7};
    int j = 0;
    
    for (int i = 0; i < nums.size(); i++)
    {
        if (i == 0 || nums[i] != nums[i-1])
        {
            nums[j] = nums[i];
            j++;
        }
    }
    
    for (int i = 0; i < j; i++)
    {
        cout << nums[i];
    }
    
    return 0;
}