#include <iostream>
using namespace std;

int n, m;

int main() {
    cin >> n >> m;
    bool boba = n % 2, biba = m % 2;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (boba) cout << '.';
            else cout << 'X';
            boba = !boba;
        }
        cout << endl;
        if (!biba) boba = !boba;
    }

    return 0;
}