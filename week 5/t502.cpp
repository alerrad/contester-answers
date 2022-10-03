#include <iostream>
using namespace std;

int n, x, sm1 = 0, sm2 = 0;

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if (j == i) sm1 += x;
            if (j + i == n - 1) sm2 += x;
        };
    }
    
    cout << sm1 << ' ' << sm2;
    return 0;
}