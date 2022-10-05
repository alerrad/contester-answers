#include <iostream>

using namespace std;

const int N = 100;
int n, arr[N];

int sum_between_zeros(int seq[N]) {
    int sm = 0, l = 0, r = 0;
    // Find first zero
    for (int i = 0; i < n; ++i) {
        if (!*(seq + i)) {
            l = i; // Find second zero
            for (int j = i + 1; j < n; ++j) {
                if (!*(seq + j)) {
                    r = j;
                    break;
                }
            }
            break;
        }
    } // Sum elements between
    for (int i = l; i <= r; ++i) sm += *(seq + i);
    return sm;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> *(arr + i);
    int ans = sum_between_zeros(arr);
    cout << ans;
    return 0;
}