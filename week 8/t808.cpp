#include <iostream>

using namespace std;

const int N = 100;
int n, arr[N];

int sum_b4_max(int seq[N]) {
    int sm = 0, r = 0, mx = -9999999;
    for (int i = 0; i < n; ++i) {
        if (mx <= *(seq + i)) {
            mx = *(seq + i);
            r = i;
        }
    }
    for (int i = 0; i < r; ++i) {
        if (*(seq + i) > 0) sm += *(seq + i);
    }
    return sm;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> *(arr + i);
    int ans = sum_b4_max(arr);
    cout << ans;
    return 0;
}