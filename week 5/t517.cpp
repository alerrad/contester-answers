#include <iostream>

using namespace std;

const int N = 10;
int arr[N][N], mxrow, mxcol;

int main() {
    for (int i = 0; i < N; ++i) {
        int cnt = 0;
        for (int j = 0; j < N; ++j) {
            cin >> arr[i][j];
            if (!arr[i][j]) cnt++;
            else {
                mxrow = max(mxrow, cnt);
                cnt = 0;
            }
        }
        mxrow = max(mxrow, cnt);
    }
    for (int i = 0; i < N; ++i) {
        int cnt = 0;
        for (int j = 0; j < N; ++j) {
            if (arr[j][i] == 0) cnt++;
            else {
                mxcol = max(mxcol, cnt);
                cnt = 0;
            }
        }
        mxcol = max(mxcol, cnt);
    }
    cout << max(mxrow, mxcol);
    return 0;
}