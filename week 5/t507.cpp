#include <iostream>
using namespace std;

int n, x, sm = 0;
int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> x;
            if (i != j && i > 0 && j < i + 1) sm += x;
        }
    }

    cout << sm;
    return 0;
}