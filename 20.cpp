#include <bits/stdc++.h>
using namespace std;

int main() {
        unordered_map<int, int> mp;
        vector<int> arr={1,2,3,4,5,-9,3,2,3,1};
        mp[0] = 1;

        int prefixSum = 0;
        long long count = 0;

        for (int num : arr) {
            prefixSum += num;

            if (mp.find(prefixSum) != mp.end())
                count += mp[prefixSum];

            mp[prefixSum]++;
        }
        cout<<count;
    return 0;
}