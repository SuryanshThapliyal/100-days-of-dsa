#include <bits/stdc++.h>
using namespace std;

int main() {
    int n =3;
    vector<vector<int>> arr = {{1,0,0}, {0,1,0}, {0,0,1}};
    bool isIdentity = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if(arr[i][j]!=arr[j][i]){
                isIdentity = false;
                break;
            }
        }
    }
    if(isIdentity == true)
    cout<<"identity matrix";
    else
    cout<<"not identity matrix";
    return 0;
}