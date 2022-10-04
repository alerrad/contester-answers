#include <iostream>
#include <cmath>

using namespace std;

double a;
int n;
double double_power(double a, int n) {
    return pow(a, n);
}

int main() {
    cin >> a >> n;
    cout << double_power(a, n);
    return 0;
}