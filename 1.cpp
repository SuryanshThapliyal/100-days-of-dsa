#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cout << "enter size of array:" << endl;
	cin >> n;

	vector<int> arr(n + 1);
	cout << "enter array element:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	cout << "enter the position to insert the element:" << endl;
	int pos;
	cin >> pos;

	cout << "enter an element to insert:" << endl;
	int x;
	cin >> x;

	if (pos < 0 || pos > n) {
		cout << "invalid position" << endl;
		return 0;
	}

	for (int i = n; i > pos; i--) {
		arr[i] = arr[i - 1];
	}
	arr[pos] = x;

	for (int i = 0; i <= n; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}