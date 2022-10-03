#include <iostream>
using namespace std;

int n, m, x, row, col;
bool found = false;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> x;
            if (x == -1) {
                found = true;
                row = i + 1;
                col = j + 1;
            }
        }
    }
    if (found) cout << row << ' ' << col;
    else cout << "-1 -1";
    return 0;
}