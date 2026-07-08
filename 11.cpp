#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    int m;
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
    cout<<"enter elements of the matrix";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            arr[i][j] = arr[i][j] + arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}