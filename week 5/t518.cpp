#include <iostream>

using namespace std;

const int N = 12;
int n, t, arr[N][N], ans[N][N];

int main() {
    cin >> n >> t;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) cin >> arr[i][j];
    }
    for (int q = 0; q < t; ++q) {
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                ans[i][j] = arr[i][j];
                int neighbors = 0; // Checking all cells around
                for (int x = i - 1; x <= i + 1; ++x) {
                    for (int y = j - 1; y <= j + 1; ++y) {
                        if (x != i || y != j) { // Skip the current cell
                            neighbors += arr[x][y];
                        }
                    }
                }
                if (arr[i][j]) { // Living cell
                    if (neighbors < 2 || neighbors > 3) ans[i][j] = 0; // Cell dies
                } else { // Empty cell
                    if (neighbors == 3) ans[i][j] = 1; // New cell appears
                }
            }
        }
        // save changes and check for constancy
        bool changed = false;
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (arr[i][j] != ans[i][j]) changed = true;
                arr[i][j] = ans[i][j];
            }
        }
        if (!changed) break;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) cout << ans[i][j] << ' ';
        cout << endl;
    }
    return 0;
}