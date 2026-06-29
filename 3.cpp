#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    cout<<"enter array element"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cout << "enter the element to search"<<endl;
    cin >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count++;
        if(k == arr[i]){
            cout << "element found in " << i << " position"<<endl;
            break;
        }
    }
    cout << "comparisons " << count<<endl;

}