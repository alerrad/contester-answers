#include <iostream>
using namespace std;

int n, m, x;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> x;
            if (!x) {
                cout << i + 1 << ' ' << j + 1;
                return 0;
            }
        }
    }
    return 0;
}