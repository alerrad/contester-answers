#include <iostream>
#include <cmath>
using namespace std;

int n;
double a;

int main() {
    cin >> a >> n;

    double ans = 1 / a;
    for (int i = 2; i <= 2 * n; i += 2) {
        ans += (1 / pow(a, i));
    }

    cout << ans;
    return 0;
}