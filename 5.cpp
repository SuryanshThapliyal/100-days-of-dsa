#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;

    cout << "Enter the number of arrival times in the first log: ";
    cin >> n;

    cout << "Enter the number of arrival times in the second log: ";
    cin >> m;

    vector<int> log1(n), log2(m);

    cout << "Enter the arrival times for the first log (in ascending order):\n";
    for (int i = 0; i < n; i++) {
        cin >> log1[i];
    }

    cout << "Enter the arrival times for the second log (in ascending order):\n";
    for (int i = 0; i < m; i++) {
        cin >> log2[i];
    }

    cout << "Merged chronological arrival log:\n";

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (log1[i] <= log2[j]) {
            cout << log1[i] << " ";
            i++;
        } else {
            cout << log2[j] << " ";
            j++;
        }
    }

    while (i < n) {
        cout << log1[i] << " ";
        i++;
    }

    while (j < m) {
        cout << log2[j] << " ";
        j++;
    }

    cout << endl;

    return 0;
}