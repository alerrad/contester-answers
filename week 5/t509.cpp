#include <iostream>
using namespace std;

int n, m, arr[100][100], ans = -1999999, col = 0, tmp;
int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> arr[i][j];
    }
    for (int j = 0; j < m; ++j) {
        tmp = 0;
        for (int i = 0; i < n; ++i) tmp += arr[i][j];
        if (tmp > ans) {
            ans = tmp;
            col = j;
        }
    }
    cout << col + 1;
    return 0;
}