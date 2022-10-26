#include <iostream>
#include <cmath>
using namespace std;

double x;

int main() {
    cin >> x;
    double x_sq = pow(x, 2);
    double head = x_sq + (256 / x_sq);
    for (int i = 128; i >= 2; i /= 2) {
        head = x_sq + (i / head);
    }
    cout << x / head;
    return 0;
}