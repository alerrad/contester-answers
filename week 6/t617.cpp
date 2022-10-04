#include <iostream>
#include <cmath>
using namespace std;

int n, arr[100], a = 1;

int main() {
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> arr[i];
    int mn = abs(arr[0] - arr[n-1]), b = n; // First two
    for (int i = 0; i < n-1; ++i) {
        if (abs(arr[i] - arr[i + 1]) < mn) {
            a = i + 1, b = i + 2;
            mn = abs(arr[i] - arr[i + 1]);
        }
    }
    cout << a << ' ' << b;
    return 0;
}