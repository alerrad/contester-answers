#include <iostream>
using namespace std;

int n, k;
int winner(int n, int k) {
    if (n == 1) return 1;
    return (winner(n-1, k) + k) % n;
}

int main() {
    cin >> n >> k;
    cout << winner(n, k);
    return 0;
}