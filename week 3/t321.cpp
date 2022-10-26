#include <iostream>
#include <cmath>
using namespace std;

double x;

int main() {
    cin >> x;
    double deno = 1, div = 1;

    for (int i = 2; i <= 64; i *= 2) deno *= (x - i);
    for (int i = 1; i <= 63; i = i * 2 + 1) div *= (x - i);
    
    cout << deno / div;
    return 0;
}