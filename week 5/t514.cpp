#include <iostream>
using namespace std;

int n, arr[100][100];

int main() {
    cin >> n;
    if (n >= 1) cout << 1 << endl;
    if (n >= 2) cout << 1 << ' ' << 1 << endl;
    arr[0][0] = 1, arr[1][0] = 1, arr[1][1] = 1;
    for (int i = 2; i < n; ++i) {
        arr[i][0] = 1; // Starts with 1
        arr[i][i] = 1; // Ends with 1
        cout << 1 << ' ';
        for (int j = 1; j < i; ++j) {
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            cout << arr[i][j] << ' ';
        }
        cout << 1 << endl;
    }
    return 0;
}