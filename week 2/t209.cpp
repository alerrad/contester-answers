#include <iostream>
using namespace std;

double k, c;
double x1 = 0.1, x2 = 1, x3 = 5;
// y = kx + c

int main() {
    cin >> k >> c;
    
    cout << "x = " << x1 << " : y = " << k * x1 + c << endl;
    cout << "x = " << x2 << " : y = " << k * x2 + c << endl;
    cout << "x = " << x3 << " : y = " << k * x3 + c;
    return 0;
}