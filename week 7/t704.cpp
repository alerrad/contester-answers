#include <iostream>
#include <cmath>
using namespace std;

const int N = 100;
int n, grid[N][N];

void spiralka(int cur, int targ, int depth) {
    // Fill top row
    for (int i = depth; i < n - depth; ++i) {
        grid[depth][i] = cur;
        cur++;
    }
    if (cur > targ) return;
    // Fill right col
    for (int i = depth + 1; i < n - depth; ++i) {
        grid[i][n - depth - 1] = cur;
        cur++;
    }
    if (cur > targ) return;
    // Fill bottom row
    for (int i = n - depth - 2; i >= depth; --i) {
        grid[n - depth - 1][i] = cur;
        cur++;
    }
    if (cur > targ) return;
    // Fill left col
    for (int i = n - depth - 2; i > depth; --i) {
        grid[i][depth] = cur;
        cur++;
    }
    depth++;
    if (cur > targ) return;
    spiralka(cur, targ, depth);
}

void traverse_grid(int gr[N][N], int i, int j, int sz) {
    cout << gr[i][j] << ' ';
    j++;
    if (i == sz - 1 && j == sz) return;
    if (j == sz) {
        cout << endl;
        j = 0;
        i++;
    }
    traverse_grid(gr, i, j, sz);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    spiralka(1, pow(n, 2), 0);
    traverse_grid(grid, 0, 0, n);
    return 0;
}