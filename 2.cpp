#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter size of array:" << endl;
	cin >> n;

	vector<int> arr(n);
	cout << "enter array element:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "enter the position to delete the element:" << endl;
	int pos;
	cin >> pos;

	if (pos < 0 || pos > n) {
		cout << "invalid position" << endl;
		return 0;
	}

	for(int i = pos; i<n-1 ; i++){
        arr[i] = arr[i+1];
    }

	for (int i = 0; i < n-1; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}