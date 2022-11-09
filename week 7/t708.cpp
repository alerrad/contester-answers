#include <iostream>

using namespace std;

bool was[10][10];
char grid[10][10];
int n, x, y, s = 1;

void dfs(int x, int y) {
    for (int i = x - 1; i <= x + 1; ++i) {
        for (int j = y - 1; j <= y + 1; ++j) {
            if (i == x && j != y || j == y && i != x) {
                if (!was[i][j] && grid[i][j] == '.') {
                    s++;
                    was[i][j] = true;
                    dfs(i, j);
                }
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> grid[i][j];
    }
    cin >> x >> y;

    was[x - 1][y - 1] = true;
    dfs(x - 1, y - 1);
    cout << s;
    return 0;
}