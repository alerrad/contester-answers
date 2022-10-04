#include <iostream>

using namespace std;

int n, m, arr[100][100];
void answer(int A[][100]) {
    int row = 1, rows[100];
    bool found = false;
    for (int i = 0; i < n; ++i) {
        int tmp = 0;
        for (int j = 0; j < m; ++j) tmp += (A[i][j] > 0);
        rows[i] = tmp;
    }
    int mx = rows[0];
    for (int i = 1; i < n; ++i) {
        if (mx != rows[i]) {
            found = true;
            if (mx < rows[i]) {
                mx = rows[i];
                row = i + 1;
            }
        }
    }
    if (found) cout << row;
    else cout << "Numbers are equal";
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> arr[i][j];
    }
    answer(arr);
    return 0;
}