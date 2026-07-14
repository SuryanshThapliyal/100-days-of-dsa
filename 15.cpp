#include <bits/stdc++.h>
using namespace std;

int main() {
    int n =3;
    vector<vector<int>> arr = {{1,2,3}, {4,6,6}, {7,8,9}};
    int sum=0;
    int i =0, j=0;
    while(i<n && j<n){
        if(i==j){
            sum+=arr[i][j];
        }
        i++;
        j++;
    }
    cout<<sum;
    return 0;
}