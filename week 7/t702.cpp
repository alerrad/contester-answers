#include <iostream>
using namespace std;

int n;
void reversed_order(int n) {
    int x;
    cin >> x;
    if (n != 1) reversed_order(n - 1);
    cout << x << ' ';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    reversed_order(n);
    return 0;
}