#include <iostream>
using namespace std;

int n, m, arr[100][100];

int answer(int mtx[][100]) {
    int row = 0, mx = 0;
    bool found = false;
    for (int i = 0; i < n; ++i) {
        int tmp = 0, tmpmx = 0;
        for (int j = 0; j < m; ++j) {
            if (mtx[i][j] == mtx[i][j + 1]) tmp++;
            else {
                tmpmx = max(tmpmx, tmp);
                tmp = 0;
            }
        }
        if (tmpmx > 0) found = true;
        if (mx < tmpmx) {
            mx = tmpmx;
            row = i;
        }
    }
    if (found) return row;
    return -1; // Not found
}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) cin >> arr[i][j];
    }
    int res = answer(arr);
    if (res != -1) cout << "Longest series is in the string " << res;
    else cout << "No series of equal elements";
    return 0;
}