#include <iostream>
using namespace std;

int n;

int main() {
    cin >> n;
    double head = 101 + (1.0 / 103);
    for (int i = 99; i >= 1; i -= 2) {
        head = i + (1 / head);
    }
    cout << 1.0 / head;
    return 0;
}