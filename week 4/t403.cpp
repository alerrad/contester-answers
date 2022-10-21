#include <iostream>
using namespace std;

int n, arr[1000], mn = 99999;

int main() {
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
        mn = min(mn, arr[i]);
    }

    cout << mn;
    return 0;
}