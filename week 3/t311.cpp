#include <iostream>
using namespace std;

int a = 1, n;

int main() {
    cin >> n;
    for (int i = 1; i <= n; ++i) a *= i;
    cout << a;
    return 0;
}