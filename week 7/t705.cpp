#include <iostream>
#include <cmath>

using namespace std;

int n, k, arr[10000][6];
void trav(int cur, int step, int row, int col, int targ) {
    if (row == pow(k, n)) return;
    arr[row][col] = cur;
    if ((row + 1) % step == 0) cur++;
    if (cur > targ) cur = 1;
    trav(cur, step, row + 1, col, targ);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; ++i) trav(1, pow(k, n - i - 1), 0, i, k);
    for (int i = 0; i < pow(k, n); ++i) {
        for (int j = 0; j < n; ++j) cout << arr[i][j] << ' ';
        cout << endl;
    }
    return 0;
}