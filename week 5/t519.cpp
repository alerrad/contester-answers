#include <iostream>

using namespace std;

const int N = 50;
int arr[N][N], n;

int main() {
    cin >> n;

    for (int i = 0; i < n; i += 2) {
        // 1) Fill top row
        for (int j = i; j < n-i; ++j) arr[i][j - 1] = 1;

        // 2) Fill right most col
        for (int j = n - i - 1; j >= i; --j) arr[j][n-i-1] = 1;

        // 3) Fill bottom row
        for (int j = n - i - 1; j >= i; --j) arr[n-i-1][j] = 1;

        // 4) Fill left most col
        for (int j = n - i - 1; j > i + 1; --j) arr[j][i] = 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << arr[i][j];
        cout << endl;
    }
    return 0;
}