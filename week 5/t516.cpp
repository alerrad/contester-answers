#include <iostream>
using namespace std;

int n, m;
bool bubu = true;

int main() {
    cin >> n >> m;

    for (int i = 0; i < n * m; i += m) {
        if (bubu) {
            for (int j = i; j < i + m; ++j) cout << j << ' ';
        }
        else {
            for (int j = i + m - 1; j >= i; --j) cout << j << ' ';
        }
        bubu = !bubu;
        cout << endl;
    }

    return 0;
}