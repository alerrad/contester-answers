#include <iostream>
using namespace std;

int a = 2, n;

int main() {
    cin >> n;
    if (n == 0) {
        cout << 1;
        return 0;
    }
    for (int i = 0; i < n-1; ++i) a *= 2;
    cout << a;
    return 0;
}