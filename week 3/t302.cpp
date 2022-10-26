#include <iostream>
#include <cmath>
using namespace std;

double x, y, z;

int main() {
    cin >> x >> y >> z;
    if (x <= y && y <= z) cout << x * 2 << endl << y * 2 << endl << z * 2;
    else cout << abs(x) << " " << abs(y) << " " << abs(z);
    return 0;
}