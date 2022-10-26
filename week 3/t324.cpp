#include <iostream>
#include <cmath>
using namespace std;

int f;
double ans = 0;

int main() {
    cin >> f;
    for (int i = 1; i <= 50; ++i) ans += (1 / pow(i, 3));
    cout << ans;
    return 0;
}