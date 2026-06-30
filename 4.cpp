#include<bits/stdc++.h>
using namespace std;

int main(){
        vector<int> arr = {7,1,5,3,6,4};
        int n = arr.size();
        int j =n-1;
        for (int i = 0; i<j; i++)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
        for (int i = 0; i<n; i++)
        {
            cout << arr[i];
        }
    };