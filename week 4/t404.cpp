#include <iostream>
using namespace std;

int n, ans = 0, tmp, mn = 99999;

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> tmp;
        if (tmp < mn) {
            mn = tmp;
            ans = i;
        }
    }

    cout << ans;
    return 0;
}