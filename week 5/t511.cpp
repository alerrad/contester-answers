#include <iostream>
#include <cmath>
using namespace std;

int n;
int main() {
    cin >> n;
    int ans = pow(n, 2);
    for (int i = ans; i >= ans-n+1; --i) {
        for (int j = i; j >= i - n * (n - 1); j -= n) cout << j << ' ';
        cout << endl;
    }
    return 0;
}