#include <iostream>
#include <cmath>
using namespace std;

double a, ans = 0;

int main() {
    for (int i = 1; i <= 10; ++i) {
        cin >> a;
        ans += pow(a, i);
    }
    cout << ans;
    return 0;
}