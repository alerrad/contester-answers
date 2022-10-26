#include <iostream>
using namespace std;

int n;
double a, ans = 0;

int main() {
    cin >> a >> n;

    for (int i = 0; i <= n; ++i) {
        double tmp = 1 / a;
        for (int j = 1; j <= i; ++j) {
            tmp *= (1 / (a + j));
        }
        ans += tmp;
    }

    cout << ans;
    return 0;
}