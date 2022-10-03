#include <iostream>

using namespace std;

int n, m, x, ans = 10000;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> x;
            ans = min(ans, x);
        };
    }

    cout << ans;
    return 0;
}