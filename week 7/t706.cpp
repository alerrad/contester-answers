#include <iostream>

using namespace std;

bool was[6][6];
char matrix[6][6];
int n, m, cur_x = 0, cur_y = 0;

void dfs(int x, int y) {
    if (x == n - 1 && y == m - 1) return;
    if (x > 0 && !was[x - 1][y] && matrix[x - 1][y] == '.') {
        cur_x = x - 1, cur_y = y;
        was[x - 1][y] = true;
        dfs(x - 1, y);
    }
    if (x < n - 1 && !was[x + 1][y] && matrix[x + 1][y] == '.') {
        cur_x = x + 1, cur_y = y;
        was[x + 1][y] = true;
        dfs(x + 1, y);
    }
    if (y > 0 && !was[x][y - 1] && matrix[x][y - 1] == '.') {
        cur_x = x, cur_y = y - 1;
        was[x][y - 1] = true;
        dfs(x, y - 1);
    }
    if (y < m - 1 && !was[x][y + 1] && matrix[x][y + 1] == '.') {
        cur_x = x, cur_y = y + 1;
        was[x][y + 1] = true;
        dfs(x, y + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n >> m;
    was[0][0] = true;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> matrix[i][j];
    }

    dfs(0, 0);
    if (cur_x == n - 1 && cur_y == m - 1) cout << "YES";
    else cout << "NO";
    return 0;
}