#include <iostream>

using namespace std;

int n, arr[100][100], x;
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> arr[i][j];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
        cin >> x;
        arr[i][j] += x;
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cout << arr[i][j] << ' ';
        cout << endl;
    }
    return 0;
}