#include <iostream>
#include <cstring>

using namespace std;

int n;
void reversed_order(int n) {
    char x[20];
    cin >> x;
    if (n != 1) reversed_order(n - 1);
    cout << x << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> n;
    reversed_order(n);
    return 0;
}