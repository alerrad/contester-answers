#include <iostream>
#include <cmath>
using namespace std;

double a, b, c;

int main() {
    cin >> a >> b >> c;
    cout << min(a, min(b, c)) << " " << max(a, max(b, c));
    return 0;
}