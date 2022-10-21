#include <iostream>
using namespace std;
double x, y;

int main() {
    cin >> x >> y;
    
    double deno = (x - 2 * y) * x;
    double div = -2 * y;

    cout << deno / div;
    return 0;
}