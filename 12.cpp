#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int m;
    bool sym = true;
    cout<<"enter the size of row of first matrix";
    cin>>n;
    cout<<"enter the size of column of first matrix";
    cin>>m;

    int arr[n][m];
    int arr1[n][m];
    cout<<"enter elements of the matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {   
            if(arr[i][j] != arr[j][i]){
                sym = false;
                break;
            }
        }
    }
    if(sym == true){
        cout<<"matrix is symmetric";
        }
    else
    cout<<"matrix is not symmetric";
    return 0;
}