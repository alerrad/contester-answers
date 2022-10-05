#include <iostream>

using namespace std;

const int N = 100;
int n, arr[N];

int minmax_evens(int seq[N]) {
    int cnt = 0, minInd = 0, mn = 9999999, maxInd = 0, mx = -99999999;

    // Finding min and max index
    for (int i = 0; i < n; ++i) {
        if (*(seq + i) < mn) {
            mn = *(seq + i);
            minInd = i;
        }
        if (*(seq + i) >= mx) {
            mx = *(seq + i);
            maxInd = i;
        }
    }

    // counting evens
    for (int i = min(minInd, maxInd) + 1; i < max(minInd, maxInd); ++i) {
        if (*(seq + i) % 2 == 0) cnt++;
    }
    return cnt;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> *(arr + i);
    int ans = minmax_evens(arr);
    cout << ans;
    return 0;
}